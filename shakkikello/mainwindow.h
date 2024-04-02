#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QProgressBar>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timeout();

private slots:
    void on_btn120sec_clicked();

    void on_btn5min_clicked();

    void on_btnSwichPlayer1_clicked();

    void on_btnSwichPlayer2_clicked();

    void on_btnStartGame_clicked();

    void on_btnStopGame_clicked();

private:
    Ui::MainWindow *ui;
    int aika;
    short player1Time;
    short player2Time;
    short currentPlayer=0;
    short gameTime;
    QTimer * pQTimer;
    int x=0;
    int pelaaja1aika;
    int pelaaja2aika;

    void updateProgressBar();
    void setGameInfoText(QString, short);
};
#endif // MAINWINDOW_H
