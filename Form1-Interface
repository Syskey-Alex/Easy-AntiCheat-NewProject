using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DEMO
{
    public partial class Form1 : Form
    {
        private const bool V = false;

        public Form1()
        {
            InitializeComponent();
            customizeDesign();
        }

        private void panel1_Paint(object sender, PaintEventArgs e)
        {

        }

        private void panelSideMenu_Paint(object sender, PaintEventArgs e)
        {

        }

        private void button5_Click(object sender, EventArgs e)
        {
            //..
            //hook code
            //..
            hideSubmenu();
        }

        private void panel2_Paint(object sender, PaintEventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {

        }

        private void button4_Click(object sender, EventArgs e)
        {
            //..
            //More hook stuff
            //..
            hideSubmenu();
        }

        private void btnMedia_Click(object sender, EventArgs e)
        {
            showSubMenu(panelMediaSubmenu);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            //..
            //idk what to put here
            //..
            hideSubmenu();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            openChildForm(new Form2());
            
            //..
            //Eac HOOK
            //..
            hideSubmenu();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click_1(object sender, EventArgs e)
        {

        }

        private void button1_Click_2(object sender, EventArgs e)
        {
            showSubMenu(panelHacksSubmenu);
        }
        private void customizeDesign()
        {
            panelMediaSubmenu.Visible = false;
            panelHacksSubmenu.Visible = false;
            panelInjectSubmenu.Visible = false;
            //..
        }

        private void hideSubmenu()
        {
            if (panelMediaSubmenu.Visible == true)
                panelMediaSubmenu.Visible = false;
            if (panelHacksSubmenu.Visible == true)
                panelHacksSubmenu.Visible = V;
            if (panelInjectSubmenu.Visible == true)
                panelInjectSubmenu.Visible = false;         
        }
        private void showSubMenu(Panel subMenu)
        {
            if (subMenu.Visible == false)
            {
                hideSubmenu();
                subMenu.Visible = true;
            }
            else
                subMenu.Visible = false;
        }

        private void panelInjectSubmenu_Paint(object sender, PaintEventArgs e)
        {

        }

        private void button15_Click(object sender, EventArgs e)
        {
            hideSubmenu();
        }

        private void button16_Click(object sender, EventArgs e)
        {
            hideSubmenu();
        }

        private void panel1_Paint_1(object sender, PaintEventArgs e)
        {

        }

        private void button9_Click(object sender, EventArgs e)
        {
            hideSubmenu();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            hideSubmenu();
        }

        private void button7_Click(object sender, EventArgs e)
        {
            hideSubmenu();
        }

        private void button6_Click(object sender, EventArgs e)
        {
            openChildForm(new Form3());
            hideSubmenu();
        }

        private void btnStatusSubmenu_Click(object sender, EventArgs e)
        {
            showSubMenu(panelInjectSubmenu);
        }

        private void button14_Click(object sender, EventArgs e)
        {
            hideSubmenu();
        }

        private void button13_Click(object sender, EventArgs e)
        {
            hideSubmenu();
        }

        private void button12_Click(object sender, EventArgs e)
        {
            hideSubmenu();
        }

        private void button11_Click(object sender, EventArgs e)
        {
            hideSubmenu();
        }

        private void panel3_Paint(object sender, PaintEventArgs e)
        {

        }

        private void panelChild_Paint(object sender, PaintEventArgs e)
        {

        }
        private Form activeForm = null;
        private void openChildForm(Form childForm)
        {
            if (activeForm != null)
                activeForm.Close();
            activeForm = childForm;
            childForm.TopLevel = false;
            childForm.FormBorderStyle = FormBorderStyle.None;
            childForm.Dock = DockStyle.Fill;
            panelChildForm.Controls.Add(childForm);
            panelChildForm.Tag = childForm;
            childForm.BringToFront();
            childForm.Show();
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }
    }
}
