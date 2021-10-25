using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Diagnostics;

/* https://www.youtube.com/watch?v=p3gYVcggQOU */

namespace KikCs
{
    public partial class Form1 : Form
    {
        bool isXturn = true;
        bool isThereWinner = false;
        int trunsCounter = 0;
        public Form1()
        {
            InitializeComponent();
        }

        private void aboutToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("CLR Apps ARE OBSOLETE !!!", "Hint");
        }

        private void wyjdzToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void btnClick(object sender, EventArgs e)
        {
            Button b = (Button)sender;
            if (isXturn)
            {
                b.Text = "X";
            }
            else
            {
                b.Text = "O";
            }
            isXturn = !isXturn;
            b.Enabled = false;

            checkForWinner();
        }

        private void checkForWinner()
        {
            int summ = 0;
            
            foreach (Control c in Controls)
            {
                if(c is Button)
                {
                    if (c.Enabled && c.Text == "X")
                    {
                        string btnName = c.Name;
                        Debug.WriteLine(btnName);
                        string btnNoStr = btnName.Substring(btnName.Length - 2);
                        Debug.WriteLine(btnNoStr);
                        int btnNo = Int32.Parse(btnNoStr);
                        summ = summ + btnNo;
                    }
                }
            }
            //Debug.WriteLine(summ);
        }
    }
}
