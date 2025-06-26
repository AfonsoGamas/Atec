using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace PiPl0923
{
    public partial class caixasDeTexto : Form
    {
        public caixasDeTexto()
        {
            InitializeComponent();
        }

        private void btn_nome_Click(object sender, EventArgs e)
        {
            txt_nome.Text = "Afonso Gamas Marcondes";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            txt_nome.Text = string.Empty;
        }

        private void btn_limparTudo_Click(object sender, EventArgs e)
        {
            txt_nome.Clear();
            txt_escola.Clear();
            txt_curso.Clear();
        }

        private void btn_verEscola_Click(object sender, EventArgs e)
        {
            txt_escola.Text = "Atec";
        }

        private void btn_verCurso_Click(object sender, EventArgs e)
        {
            txt_curso.Text = "Programador de Informática";
        }
        private void caixasDeTexto_TextChanged(object sender, EventArgs e)
        {
            if (txt_nome.Text = string.IsNullOrWhiteSpace)
            {
                btn_limparNome.Enabled = false;
            }
            else if (txt_nome.Text != string.Empty)
            {
                btn_limparNome.Enabled = true;
            }

        }
    }
}
