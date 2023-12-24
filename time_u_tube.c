#include <QApplication>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QTimer>
#include <QInputDialog>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // Qt 멀티미디어 플레이어 및 비디오 위젯 생성
    QMediaPlayer mediaPlayer;
    QVideoWidget videoWidget;
    mediaPlayer.setVideoOutput(&videoWidget);

    // 사용자로부터 영상 파일의 URL 입력 받기
    QString videoUrl = QInputDialog::getText(nullptr, "Enter Video URL", "Video URL:");

    // 사용자로부터 시작 시간 입력 받기
    QString startTimeInput = QInputDialog::getText(nullptr, "Enter Start Time", "Start Time (HH:mm):");
    QTime startTime = QTime::fromString(startTimeInput, "HH:mm");

    // 사용자로부터 종료 시간 입력 받기
    QString endTimeInput = QInputDialog::getText(nullptr, "Enter End Time", "End Time (HH:mm):");
    QTime endTime = QTime::fromString(endTimeInput, "HH:mm");

    // 영상 재생 준비
    mediaPlayer.setMedia(QUrl(videoUrl));

    // 특정 시간에 영상 재생을 위한 타이머 생성
    QTimer timer;
    QTime currentTime = QTime::currentTime();
    int startDelay = currentTime.msecsTo(startTime);
    int endDelay = currentTime.msecsTo(endTime);

    // 시작 시간에 타이머 실행
    QObject::connect(&timer, &QTimer::timeout, [&]() {
        // 영상 재생 시작
        mediaPlayer.play();
    });
    timer.start(startDelay);

    // 종료 시간에 타이머 실행
    QTimer::singleShot(endDelay, [&]() {
        // 영상 정지
        mediaPlayer.stop();

        // 종료
        QApplication::quit();
    });

    // GUI 실행
    videoWidget.show();
    return a.exec();
}