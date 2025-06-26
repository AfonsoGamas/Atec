namespace PiPl0923
{
    partial class caixasDeTexto
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.Titulo = new System.Windows.Forms.Label();
            this.txt_nome = new System.Windows.Forms.TextBox();
            this.btn_nome = new System.Windows.Forms.Button();
            this.lbl_nome = new System.Windows.Forms.Label();
            this.btn_limparNome = new System.Windows.Forms.Button();
            this.lbl_escola = new System.Windows.Forms.Label();
            this.txt_escola = new System.Windows.Forms.TextBox();
            this.lbl_curso = new System.Windows.Forms.Label();
            this.txt_curso = new System.Windows.Forms.TextBox();
            this.btn_limparTudo = new System.Windows.Forms.Button();
            this.btn_verEscola = new System.Windows.Forms.Button();
            this.btn_verCurso = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // Titulo
            // 
            this.Titulo.AutoSize = true;
            this.Titulo.Font = new System.Drawing.Font("Microsoft Sans Serif", 30F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Titulo.Location = new System.Drawing.Point(238, 38);
            this.Titulo.Name = "Titulo";
            this.Titulo.Size = new System.Drawing.Size(325, 46);
            this.Titulo.TabIndex = 3;
            this.Titulo.Text = "Caixas de Texto";
            // 
            // txt_nome
            // 
            this.txt_nome.Location = new System.Drawing.Point(91, 161);
            this.txt_nome.Name = "txt_nome";
            this.txt_nome.Size = new System.Drawing.Size(237, 20);
            this.txt_nome.TabIndex = 4;
            // 
            // btn_nome
            // 
            this.btn_nome.Location = new System.Drawing.Point(10, 159);
            this.btn_nome.Name = "btn_nome";
            this.btn_nome.Size = new System.Drawing.Size(75, 23);
            this.btn_nome.TabIndex = 5;
            this.btn_nome.Text = "Ver Nome";
            this.btn_nome.UseVisualStyleBackColor = true;
            this.btn_nome.Click += new System.EventHandler(this.btn_nome_Click);
            // 
            // lbl_nome
            // 
            this.lbl_nome.AutoSize = true;
            this.lbl_nome.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbl_nome.Location = new System.Drawing.Point(88, 145);
            this.lbl_nome.Name = "lbl_nome";
            this.lbl_nome.Size = new System.Drawing.Size(39, 13);
            this.lbl_nome.TabIndex = 6;
            this.lbl_nome.Text = "Nome";
            // 
            // btn_limparNome
            // 
            this.btn_limparNome.Location = new System.Drawing.Point(334, 161);
            this.btn_limparNome.Name = "btn_limparNome";
            this.btn_limparNome.Size = new System.Drawing.Size(87, 23);
            this.btn_limparNome.TabIndex = 7;
            this.btn_limparNome.Text = "Limpar Nome";
            this.btn_limparNome.UseVisualStyleBackColor = true;
            this.btn_limparNome.Click += new System.EventHandler(this.button1_Click);
            // 
            // lbl_escola
            // 
            this.lbl_escola.AutoSize = true;
            this.lbl_escola.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbl_escola.Location = new System.Drawing.Point(88, 198);
            this.lbl_escola.Name = "lbl_escola";
            this.lbl_escola.Size = new System.Drawing.Size(118, 13);
            this.lbl_escola.TabIndex = 9;
            this.lbl_escola.Text = "Instituição / Escola";
            // 
            // txt_escola
            // 
            this.txt_escola.Location = new System.Drawing.Point(91, 214);
            this.txt_escola.Name = "txt_escola";
            this.txt_escola.Size = new System.Drawing.Size(237, 20);
            this.txt_escola.TabIndex = 8;
            // 
            // lbl_curso
            // 
            this.lbl_curso.AutoSize = true;
            this.lbl_curso.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbl_curso.Location = new System.Drawing.Point(88, 254);
            this.lbl_curso.Name = "lbl_curso";
            this.lbl_curso.Size = new System.Drawing.Size(39, 13);
            this.lbl_curso.TabIndex = 11;
            this.lbl_curso.Text = "Curso";
            // 
            // txt_curso
            // 
            this.txt_curso.Location = new System.Drawing.Point(91, 270);
            this.txt_curso.Name = "txt_curso";
            this.txt_curso.Size = new System.Drawing.Size(237, 20);
            this.txt_curso.TabIndex = 10;
            // 
            // btn_limparTudo
            // 
            this.btn_limparTudo.Location = new System.Drawing.Point(10, 317);
            this.btn_limparTudo.Name = "btn_limparTudo";
            this.btn_limparTudo.Size = new System.Drawing.Size(87, 23);
            this.btn_limparTudo.TabIndex = 12;
            this.btn_limparTudo.Text = "Limpar Tudo";
            this.btn_limparTudo.UseVisualStyleBackColor = true;
            this.btn_limparTudo.Click += new System.EventHandler(this.btn_limparTudo_Click);
            // 
            // btn_verEscola
            // 
            this.btn_verEscola.Location = new System.Drawing.Point(10, 211);
            this.btn_verEscola.Name = "btn_verEscola";
            this.btn_verEscola.Size = new System.Drawing.Size(75, 23);
            this.btn_verEscola.TabIndex = 13;
            this.btn_verEscola.Text = "Ver Escola";
            this.btn_verEscola.UseVisualStyleBackColor = true;
            this.btn_verEscola.Click += new System.EventHandler(this.btn_verEscola_Click);
            // 
            // btn_verCurso
            // 
            this.btn_verCurso.Location = new System.Drawing.Point(10, 268);
            this.btn_verCurso.Name = "btn_verCurso";
            this.btn_verCurso.Size = new System.Drawing.Size(75, 23);
            this.btn_verCurso.TabIndex = 14;
            this.btn_verCurso.Text = "Ver Curso";
            this.btn_verCurso.UseVisualStyleBackColor = true;
            this.btn_verCurso.Click += new System.EventHandler(this.btn_verCurso_Click);
            // 
            // caixasDeTexto
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btn_verCurso);
            this.Controls.Add(this.btn_verEscola);
            this.Controls.Add(this.btn_limparTudo);
            this.Controls.Add(this.lbl_curso);
            this.Controls.Add(this.txt_curso);
            this.Controls.Add(this.lbl_escola);
            this.Controls.Add(this.txt_escola);
            this.Controls.Add(this.btn_limparNome);
            this.Controls.Add(this.lbl_nome);
            this.Controls.Add(this.btn_nome);
            this.Controls.Add(this.txt_nome);
            this.Controls.Add(this.Titulo);
            this.Name = "caixasDeTexto";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "caixasDeTexto";
            this.Load += new System.EventHandler(this.caixasDeTexto_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label Titulo;
        private System.Windows.Forms.TextBox txt_nome;
        private System.Windows.Forms.Button btn_nome;
        private System.Windows.Forms.Label lbl_nome;
        private System.Windows.Forms.Button btn_limparNome;
        private System.Windows.Forms.Label lbl_escola;
        private System.Windows.Forms.TextBox txt_escola;
        private System.Windows.Forms.Label lbl_curso;
        private System.Windows.Forms.TextBox txt_curso;
        private System.Windows.Forms.Button btn_limparTudo;
        private System.Windows.Forms.Button btn_verEscola;
        private System.Windows.Forms.Button btn_verCurso;
    }
}