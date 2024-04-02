#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer();
    ui->progressBar1->setValue(0);
    ui->progressBar_2->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeout()
{
    //kutsutaan sekunnin välein
    qDebug()<<"timeout"<<pelaaja1aika;
    qDebug()<<pelaaja2aika;
    updateProgressBar();

    if(pelaaja1aika==0){
        qDebug()<<"pelaaja 1 aika loppui";
        pQTimer->stop();
        ui->label->setText("pelaaja1 aika loppui");
        currentPlayer=0;
    }
    else if(pelaaja2aika==0){
        qDebug()<<"pelaaja 1 aika loppui";
        pQTimer->stop();
        ui->label->setText("pelaaja2 aika loppui");
        currentPlayer=0;
    }


}


void MainWindow::on_btn120sec_clicked()
{
    qDebug()<<"120 valittu";
    gameTime = 120;
    ui->label->setText("120sec valittu");
}


void MainWindow::on_btn5min_clicked()
{
    qDebug()<<"5min valittu";
    gameTime = 300;
    ui->label->setText("5min valittu");
}


void MainWindow::on_btnSwichPlayer1_clicked()
{
    qDebug()<<currentPlayer;
    currentPlayer=2;
}


void MainWindow::on_btnSwichPlayer2_clicked()
{
    currentPlayer=1;
    qDebug()<<currentPlayer;
}


void MainWindow::on_btnStartGame_clicked()
{
    //kertaa
    if (currentPlayer !=1 && currentPlayer !=2){


    currentPlayer=1;
    qDebug()<<" start game";
    //kertaus
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));
    pQTimer->start(50);

    pelaaja1aika=gameTime;
    pelaaja2aika=gameTime;

    ui->progressBar1->setRange(0,gameTime);
    ui->progressBar1->setValue(gameTime);

    ui->progressBar_2->setRange(0,gameTime);
    ui->progressBar_2->setValue(gameTime);



    qDebug()<<gameTime;
    }
}


void MainWindow::on_btnStopGame_clicked()
{
    qDebug()<<" stop game";
    pelaaja1aika=0;
    pelaaja2aika=0;
    pQTimer->stop();
    currentPlayer=0;
}

void MainWindow::updateProgressBar()
{
    if(currentPlayer==1){
        ui->progressBar1->setValue(pelaaja1aika -=1);
    }
    else if(currentPlayer==2){
        ui->progressBar_2->setValue(pelaaja2aika -=1);
    }
}

void MainWindow::setGameInfoText(QString, short)
{

}

