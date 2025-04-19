# generate_marketplace_pdf.py

from fpdf import FPDF
import os

# 1) Content sections (updated from commented text)
content = [
    ("Definition",
     "A marketplace is a platform that connects buyers and sellers to trade goods, services, or rentals, earning revenue through fees. "
     "It leverages network effects, where increased users enhance platform value.\n"
     "Example: Amazon facilitates third-party sellers and buyers, earning commissions."),
    ("Types of Marketplaces",
     "- Product: Physical/digital goods (e.g., Amazon: broad retail; Etsy: niche handmade items).\n"
     "- Service: Professional services (e.g., Upwork: freelancers; Fiverr: gig-based tasks).\n"
     "- Rental: Asset leasing (e.g., Airbnb: accommodations; Turo: vehicles).\n"
     "- P2P: Individual-to-individual trading (e.g., eBay: used goods; Poshmark: fashion).\n"
     "Example: Airbnb dominates rental, while eBay leads P2P trading."),
    ("Operational Framework",
     "Marketplaces function by managing:\n"
     "- Supply (Sellers): List products/services, set terms (e.g., Etsy sellers upload craft listings).\n"
     "- Demand (Buyers): Search, select, purchase (e.g., Amazon buyers filter by price/reviews).\n"
     "- Platform Role: Processes payments, ensures delivery (e.g., Airbnb holds funds until check-in).\n"
     "- Trust Mechanisms: Ratings, verifications, refunds (e.g., Upwork’s client-freelancer reviews).\n"
     "Example: Uber connects drivers and riders, handling payments and safety protocols."),
    ("Revenue Models",
     "- Transaction Fees: % per sale (e.g., eBay: ~12.9%).\n"
     "- Listing Fees: Per-item posting cost (e.g., Etsy: $0.20).\n"
     "- Subscriptions: Premium seller access (e.g., Amazon: $39.99/month).\n"
     "- Advertising: Paid promotions (e.g., Amazon Sponsored Ads).\n"
     "Example: Airbnb charges hosts 3-5%, guests up to 14.2% per transaction."),
    ("Strategic Challenges",
     "- Initial Traction: Balancing supply/demand. Solution: Target one side first (e.g., Airbnb prioritized hosts).\n"
     "- Trust & Quality: Preventing fraud. Solution: Robust reviews, guarantees (e.g., eBay’s refund policy).\n"
     "- Market Competition: Differentiating from giants. Solution: Niche focus (e.g., Reverb for musical instruments).\n"
     "Example: Etsy succeeded by focusing on handmade goods, avoiding direct competition with Amazon."),
    ("Key Examples",
     "- Amazon: E-commerce leader with global logistics and third-party sellers.\n"
     "- Airbnb: Rental platform disrupting hospitality.\n"
     "- Upwork: Service marketplace for remote work.\n"
     "- eBay: P2P trading for collectibles and used items."),
    ("Business Implications",
     "- Opportunity: Marketplaces offer scalable models with low inventory costs.\n"
     "- Consideration: Success requires strong trust systems and niche differentiation.\n"
     "- Action: Evaluate niche markets or partnership opportunities (e.g., integrating with existing platforms like Shopify).")
]

# 2) Custom PDF class with professional styling
class StyledPDF(FPDF):
    def __init__(self):
        super().__init__()
        self.left_margin = 15
        self.right_margin = 15
        self.top_margin = 20
        self.bottom_margin = 20

    def header(self):
        """First-page header with title and subtitle"""
        if self.page_no() == 1:
            self.set_fill_color(245, 245, 255)  # Light blue background
            self.set_text_color(20, 40, 80)    # Dark blue text
            self.set_font("DejaVu", "B", 18)
            self.cell(0, 15, "Marketplace Research Summary", ln=True, align="C", fill=True)
            self.set_font("DejaVu", "", 12)
            self.cell(0, 10, "Prepared for Business Review", ln=True, align="C")
            self.ln(15)  # Extra padding after header

    def footer(self):
        """Page number footer"""
        self.set_y(-15)
        self.set_font("DejaVu", "", 9)
        self.set_text_color(100, 100, 100)
        self.cell(0, 10, f"Page {self.page_no()}", align="C")

    def chapter_title(self, num, label):
        """Section title with consistent styling"""
        self.set_font("DejaVu", "B", 14)
        self.set_fill_color(230, 240, 255)  # Light blue section background
        self.set_text_color(0, 51, 102)     # Professional blue
        self.cell(0, 12, f"{num}. {label}", ln=True, align="L", fill=True)
        self.ln(4)  # Space after title

    def chapter_body(self, body):
        """Section body with readable formatting"""
        self.set_font("DejaVu", "", 11)
        self.set_text_color(30, 30, 30)
        self.multi_cell(0, 7, body, align="L")
        self.ln(6)  # Space after body

# 3) Main function to generate PDF
def generate_pdf():
    # Initialize PDF
    pdf = StyledPDF()
    pdf.set_margins(left=15, top=20, right=15)
    pdf.set_auto_page_break(auto=True, margin=20)

    # Check if font file exists
    font_path = "DejaVuSans.ttf"
    if not os.path.exists(font_path):
        print(f"Error: Font file '{font_path}' not found. Please ensure it is in the same directory.")
        return

    # Register fonts
    pdf.add_font("DejaVu", "", font_path)
    pdf.add_font("DejaVu", "B", font_path)

    # Add first page
    pdf.add_page()

    # Write each section
    for idx, (title, body) in enumerate(content, start=1):
        pdf.chapter_title(idx, title)
        pdf.chapter_body(body)

    # 4) Estimate and place closing block
    closing_block_height = 34  # Adjusted for title (8pt), gap (3pt), 3 lines × 5pt, top margin (10pt)
    if pdf.get_y() + closing_block_height > pdf.page_break_trigger:
        pdf.add_page()

    # 5) Branded closing block with professional styling and top margin
    pdf.ln(10)  # Top margin of 10mm
    pdf.set_font("DejaVu", "B", 14)
    pdf.set_text_color(20, 40, 80)
    # pdf.cell(0, 8, "Prepared by Khushal", ln=True, align="C")
    pdf.ln(3)
    pdf.set_font("DejaVu", "", 10)
    pdf.set_text_color(80, 80, 80)
    pdf.multi_cell(
        0, 5,
        "This document was prepared by Khushal.\n"
        "© 2025 Khushal. All rights reserved.\n"
        "For inquiries, contact: kmakwana1255@gmail.com",
        align="C"
    )

    # 6) Save PDF
    output_file = "Marketplace_Research_Summary_Professional.pdf"
    try:
        pdf.output(output_file)
        print(f"✅ Generated {output_file}")
    except Exception as e:
        print(f"Error saving PDF: {str(e)}")

# 7) Execute
if __name__ == "__main__":
    generate_pdf()