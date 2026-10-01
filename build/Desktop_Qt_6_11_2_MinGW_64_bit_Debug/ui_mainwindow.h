/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *rootLayout;
    QFrame *headerFrame;
    QHBoxLayout *headerLayout;
    QLabel *logoLabel;
    QVBoxLayout *titleLayout;
    QLabel *appTitleLabel;
    QLabel *appSubtitleLabel;
    QSpacerItem *spacer1;
    QGridLayout *bellLayout;
    QToolButton *bellButton;
    QLabel *badgeLabel;
    QFrame *userFrame;
    QHBoxLayout *userLayout;
    QLabel *avatarLabel;
    QComboBox *organizerCombo;
    QHBoxLayout *bodyLayout;
    QFrame *sidebarFrame;
    QVBoxLayout *sidebarLayout;
    QPushButton *navHackathons;
    QPushButton *navParticipants;
    QPushButton *navTeams;
    QPushButton *navOrganizers;
    QSpacerItem *spacer2;
    QFrame *infoFrame;
    QVBoxLayout *infoLayout;
    QHBoxLayout *infoHeaderLayout;
    QLabel *infoIcon;
    QVBoxLayout *infoTitleLayout;
    QLabel *infoTitle;
    QLabel *infoSubtitle;
    QSpacerItem *spacer3;
    QFrame *infoLine;
    QVBoxLayout *teamIdLayout;
    QLabel *teamIdLabel;
    QLineEdit *teamIdEdit;
    QVBoxLayout *teamNameLayout;
    QLabel *teamNameLabel;
    QLineEdit *teamNameEdit;
    QVBoxLayout *membersLayout;
    QLabel *membersLabel;
    QLineEdit *membersEdit;
    QVBoxLayout *leaderLayout;
    QLabel *leaderLabel;
    QComboBox *leaderCombo;
    QVBoxLayout *statusLayout;
    QLabel *statusLabel;
    QComboBox *statusCombo;
    QSpacerItem *spacer4;
    QPushButton *saveButton;
    QVBoxLayout *rightLayout;
    QFrame *mgmtFrame;
    QVBoxLayout *mgmtLayout;
    QHBoxLayout *mgHeaderLayout;
    QLabel *mgIcon;
    QVBoxLayout *mgTitleLayout;
    QLabel *mgTitle;
    QLabel *mgSubtitle;
    QSpacerItem *spacer5;
    QFrame *mgmtLine;
    QHBoxLayout *searchRowLayout;
    QLineEdit *searchEdit;
    QPushButton *searchButton;
    QSpacerItem *spacer6;
    QPushButton *addTeamButton;
    QTableWidget *teamsTable;
    QHBoxLayout *pagerLayout;
    QLabel *showingLabel;
    QSpacerItem *spacer7;
    QPushButton *firstPageButton;
    QPushButton *prevPageButton;
    QPushButton *page1Button;
    QPushButton *nextPageButton;
    QPushButton *lastPageButton;
    QHBoxLayout *cardsRow1Layout;
    QFrame *cardView;
    QHBoxLayout *cardViewLayout;
    QLabel *cardViewIcon;
    QVBoxLayout *cardViewTextLayout;
    QLabel *cardViewTitle;
    QLabel *cardViewSub;
    QSpacerItem *spacer8;
    QLabel *cardViewChevron;
    QFrame *cardEdit;
    QHBoxLayout *cardEditLayout;
    QLabel *cardEditIcon;
    QVBoxLayout *cardEditTextLayout;
    QLabel *cardEditTitle;
    QLabel *cardEditSub;
    QSpacerItem *spacer9;
    QLabel *cardEditChevron;
    QFrame *cardDelete;
    QHBoxLayout *cardDeleteLayout;
    QLabel *cardDeleteIcon;
    QVBoxLayout *cardDeleteTextLayout;
    QLabel *cardDeleteTitle;
    QLabel *cardDeleteSub;
    QSpacerItem *spacer10;
    QLabel *cardDeleteChevron;
    QFrame *cardPdf;
    QHBoxLayout *cardPdfLayout;
    QLabel *cardPdfIcon;
    QVBoxLayout *cardPdfTextLayout;
    QLabel *cardPdfTitle;
    QLabel *cardPdfSub;
    QSpacerItem *spacer11;
    QLabel *cardPdfChevron;
    QHBoxLayout *cardsRow2Layout;
    QFrame *cardStats;
    QHBoxLayout *cardStatsLayout;
    QLabel *cardStatsIcon;
    QVBoxLayout *cardStatsTextLayout;
    QLabel *cardStatsTitle;
    QLabel *cardStatsSub;
    QSpacerItem *spacer12;
    QLabel *cardStatsChevron;
    QFrame *cardHistory;
    QHBoxLayout *cardHistoryLayout;
    QLabel *cardHistoryIcon;
    QVBoxLayout *cardHistoryTextLayout;
    QLabel *cardHistoryTitle;
    QLabel *cardHistorySub;
    QSpacerItem *spacer13;
    QLabel *cardHistoryChevron;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1180, 700);
        MainWindow->setMinimumSize(QSize(1000, 640));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow, #centralwidget { background-color: #030a1c; }\n"
"QLabel { background: transparent; color: #e6f1ff; font-family: \"Segoe UI\", \"Roboto\", \"Noto Sans\", sans-serif; font-size: 9pt; }\n"
"QToolTip { background: #0a1d44; color: #e6f1ff; border: 1px solid #1e5bd6; }\n"
"\n"
"/* ---------- header ---------- */\n"
"#headerFrame {\n"
"  background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #061431, stop:0.45 #0a2a6e, stop:0.75 #1c2fa0, stop:1 #4b1fa8);\n"
"  border: 1px solid #1d4ed8; border-radius: 8px;\n"
"}\n"
"#logoLabel { font-size: 24pt; }\n"
"#appTitleLabel { font-size: 14pt; font-weight: 600; color: #ffffff; }\n"
"#appSubtitleLabel { font-size: 9pt; color: #bcd3ff; }\n"
"#bellButton { background: transparent; border: none; font-size: 15pt; color: #4db5ff; }\n"
"#badgeLabel { background: #e11d48; color: white; border-radius: 7px; font-size: 7pt; font-weight: bold; }\n"
"#userFrame { background: rgba(6, 20, 49, 160); border: 1px solid #2a5bd7; border-radius: 8px; }\n"
"#avatarLabel { backgro"
                        "und: #0b1f4d; border: 1px solid #4db5ff; border-radius: 15px; font-size: 11pt; }\n"
"\n"
"/* ---------- panels ---------- */\n"
"#sidebarFrame, #infoFrame, #mgmtFrame { background-color: #051030; border: 1px solid #123a7a; border-radius: 8px; }\n"
"#infoLine, #mgmtLine { background-color: #123a7a; border: none; }\n"
"\n"
"/* ---------- sidebar ---------- */\n"
"#sidebarFrame QPushButton {\n"
"  background: transparent; color: #cfe3ff; border: none; border-radius: 6px;\n"
"  text-align: left; padding: 8px 12px; font-size: 9pt;\n"
"}\n"
"#sidebarFrame QPushButton:hover { background: #0a1f4f; }\n"
"#sidebarFrame QPushButton:checked { background: #0a4ec9; color: #ffffff; font-weight: 600; }\n"
"\n"
"/* ---------- section titles ---------- */\n"
"#infoIcon, #mgIcon { font-size: 20pt; color: #22d3ee; }\n"
"#infoTitle, #mgTitle { font-size: 12pt; font-weight: 600; color: #ffffff; }\n"
"#infoSubtitle, #mgSubtitle { font-size: 8pt; color: #a9bfe6; }\n"
"#teamIdLabel, #teamNameLabel, #membersLabel, #leaderLabel, #status"
                        "Label { font-size: 9pt; font-weight: 600; color: #e6f1ff; }\n"
"\n"
"/* ---------- inputs ---------- */\n"
"QLineEdit, QComboBox {\n"
"  background-color: #071a3d; color: #dbe9ff; border: 1px solid #1e5bd6; border-radius: 6px;\n"
"  padding: 8px 10px; font-size: 9pt; selection-background-color: #0b6cff;\n"
"}\n"
"QLineEdit:focus, QComboBox:focus { border: 1px solid #22d3ee; }\n"
"QComboBox::drop-down { border: none; width: 28px; }\n"
"QComboBox::down-arrow { image: url(:/images/arrow_down.png); width: 12px; height: 8px; }\n"
"QComboBox QAbstractItemView {\n"
"  background: #071a3d; color: #e6f1ff; border: 1px solid #1e5bd6;\n"
"  selection-background-color: #0b6cff; selection-color: white; outline: none;\n"
"}\n"
"#organizerCombo { background: transparent; border: none; padding: 4px 6px; font-size: 10pt; color: #ffffff; min-width: 90px; }\n"
"#organizerCombo QAbstractItemView { background: #071a3d; }\n"
"\n"
"/* ---------- buttons ---------- */\n"
"#saveButton { background-color: #0b6cff; color: white; border:"
                        " none; border-radius: 6px; font-weight: 600; font-size: 10pt; }\n"
"#saveButton:hover { background-color: #2b82ff; }\n"
"#searchButton { background-color: #0b6cff; color: white; border: none; border-radius: 6px; font-weight: 500; }\n"
"#searchButton:hover { background-color: #2b82ff; }\n"
"#addTeamButton { background-color: #0f9d93; color: white; border: 1px solid #22d3c4; border-radius: 6px; font-weight: 600; }\n"
"#addTeamButton:hover { background-color: #14b8aa; }\n"
"\n"
"/* ---------- table ---------- */\n"
"#teamsTable { background-color: #040d26; color: #dbe9ff; border: 1px solid #123a7a; gridline-color: #123a7a; outline: none; }\n"
"#teamsTable::item:selected { background: #0a4ec9; color: white; }\n"
"QHeaderView { background: #0a1d44; }\n"
"QHeaderView::section { background-color: #0a1d44; color: #e6f1ff; border: none; border-right: 1px solid #123a7a; border-bottom: 1px solid #123a7a; padding: 8px 4px; font-weight: 600; }\n"
"QTableCornerButton::section { background: #0a1d44; border: none; }\n"
"QScro"
                        "llBar:vertical { background: #040d26; width: 10px; margin: 0; }\n"
"QScrollBar::handle:vertical { background: #1e5bd6; border-radius: 5px; min-height: 24px; }\n"
"QScrollBar::add-line, QScrollBar::sub-line { height: 0; width: 0; }\n"
"\n"
"/* ---------- pager ---------- */\n"
"#showingLabel { color: #a9bfe6; font-size: 8pt; }\n"
"#firstPageButton, #prevPageButton, #nextPageButton, #lastPageButton, #page1Button {\n"
"  background: #081a3f; color: #cfe3ff; border: 1px solid #1e5bd6; border-radius: 5px; font-size: 10pt;\n"
"}\n"
"#page1Button:checked { background: #0b6cff; color: white; border: 1px solid #0b6cff; font-weight: 600; }\n"
"#firstPageButton:hover, #prevPageButton:hover, #nextPageButton:hover, #lastPageButton:hover { background: #0f2c66; }\n"
"\n"
"/* ---------- action cards ---------- */\n"
"#cardView    { background-color: #0a3a8f; border: 1px solid #2b7bff; border-radius: 8px; }\n"
"#cardEdit    { background-color: #0a4a52; border: 1px solid #14b8a6; border-radius: 8px; }\n"
"#cardDelete  { backgro"
                        "und-color: #5c1038; border: 1px solid #e11d48; border-radius: 8px; }\n"
"#cardPdf     { background-color: #35197a; border: 1px solid #8b5cf6; border-radius: 8px; }\n"
"#cardStats, #cardHistory { background-color: #061a42; border: 1px solid #1fa7ff; border-radius: 8px; }\n"
"\n"
"#cardViewIcon, #cardEditIcon, #cardDeleteIcon, #cardPdfIcon, #cardStatsIcon, #cardHistoryIcon { font-size: 18pt; }\n"
"#cardViewTitle, #cardEditTitle, #cardDeleteTitle, #cardPdfTitle, #cardStatsTitle, #cardHistoryTitle { font-size: 9pt; font-weight: 600; color: #ffffff; }\n"
"#cardViewSub, #cardEditSub, #cardDeleteSub, #cardPdfSub, #cardStatsSub, #cardHistorySub { font-size: 7pt; color: #b5c9ee; }\n"
"#cardViewChevron    { font-size: 16pt; color: #4db5ff; }\n"
"#cardEditChevron    { font-size: 16pt; color: #2dd4bf; }\n"
"#cardDeleteChevron  { font-size: 16pt; color: #fb7185; }\n"
"#cardPdfChevron     { font-size: 16pt; color: #a78bfa; }\n"
"#cardStatsChevron, #cardHistoryChevron { font-size: 16pt; color: #4db5ff; }\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        rootLayout = new QVBoxLayout(centralwidget);
        rootLayout->setSpacing(10);
        rootLayout->setObjectName("rootLayout");
        rootLayout->setContentsMargins(12, 12, 12, 12);
        headerFrame = new QFrame(centralwidget);
        headerFrame->setObjectName("headerFrame");
        headerFrame->setMinimumSize(QSize(0, 66));
        headerFrame->setMaximumSize(QSize(16777215, 66));
        headerFrame->setFrameShape(QFrame::Shape::NoFrame);
        headerLayout = new QHBoxLayout(headerFrame);
        headerLayout->setSpacing(12);
        headerLayout->setObjectName("headerLayout");
        headerLayout->setContentsMargins(14, 8, 14, 8);
        logoLabel = new QLabel(headerFrame);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setMinimumSize(QSize(48, 48));
        logoLabel->setMaximumSize(QSize(48, 48));
        logoLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        headerLayout->addWidget(logoLabel);

        titleLayout = new QVBoxLayout();
        titleLayout->setSpacing(0);
        titleLayout->setObjectName("titleLayout");
        titleLayout->setContentsMargins(0, 0, 0, 0);
        appTitleLabel = new QLabel(headerFrame);
        appTitleLabel->setObjectName("appTitleLabel");

        titleLayout->addWidget(appTitleLabel);

        appSubtitleLabel = new QLabel(headerFrame);
        appSubtitleLabel->setObjectName("appSubtitleLabel");

        titleLayout->addWidget(appSubtitleLabel);


        headerLayout->addLayout(titleLayout);

        spacer1 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        headerLayout->addItem(spacer1);

        bellLayout = new QGridLayout();
        bellLayout->setSpacing(0);
        bellLayout->setObjectName("bellLayout");
        bellLayout->setContentsMargins(0, 0, 0, 0);
        bellButton = new QToolButton(headerFrame);
        bellButton->setObjectName("bellButton");
        bellButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        bellLayout->addWidget(bellButton, 0, 0, 1, 1);

        badgeLabel = new QLabel(headerFrame);
        badgeLabel->setObjectName("badgeLabel");
        badgeLabel->setMinimumSize(QSize(15, 15));
        badgeLabel->setMaximumSize(QSize(15, 15));
        badgeLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        bellLayout->addWidget(badgeLabel, 0, 0, 1, 1, Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTop);


        headerLayout->addLayout(bellLayout);

        userFrame = new QFrame(headerFrame);
        userFrame->setObjectName("userFrame");
        userFrame->setFrameShape(QFrame::Shape::NoFrame);
        userLayout = new QHBoxLayout(userFrame);
        userLayout->setSpacing(4);
        userLayout->setObjectName("userLayout");
        userLayout->setContentsMargins(4, 2, 4, 2);
        avatarLabel = new QLabel(userFrame);
        avatarLabel->setObjectName("avatarLabel");
        avatarLabel->setMinimumSize(QSize(30, 30));
        avatarLabel->setMaximumSize(QSize(30, 30));
        avatarLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        userLayout->addWidget(avatarLabel);

        organizerCombo = new QComboBox(userFrame);
        organizerCombo->addItem(QString());
        organizerCombo->setObjectName("organizerCombo");

        userLayout->addWidget(organizerCombo);


        headerLayout->addWidget(userFrame);


        rootLayout->addWidget(headerFrame);

        bodyLayout = new QHBoxLayout();
        bodyLayout->setSpacing(10);
        bodyLayout->setObjectName("bodyLayout");
        bodyLayout->setContentsMargins(0, 0, 0, 0);
        sidebarFrame = new QFrame(centralwidget);
        sidebarFrame->setObjectName("sidebarFrame");
        sidebarFrame->setMinimumSize(QSize(140, 0));
        sidebarFrame->setMaximumSize(QSize(140, 16777215));
        sidebarFrame->setFrameShape(QFrame::Shape::NoFrame);
        sidebarLayout = new QVBoxLayout(sidebarFrame);
        sidebarLayout->setSpacing(6);
        sidebarLayout->setObjectName("sidebarLayout");
        sidebarLayout->setContentsMargins(8, 12, 8, 12);
        navHackathons = new QPushButton(sidebarFrame);
        navHackathons->setObjectName("navHackathons");
        navHackathons->setMinimumSize(QSize(0, 38));
        navHackathons->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        navHackathons->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        navHackathons->setCheckable(true);
        navHackathons->setChecked(false);
        navHackathons->setAutoExclusive(true);

        sidebarLayout->addWidget(navHackathons);

        navParticipants = new QPushButton(sidebarFrame);
        navParticipants->setObjectName("navParticipants");
        navParticipants->setMinimumSize(QSize(0, 38));
        navParticipants->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        navParticipants->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        navParticipants->setCheckable(true);
        navParticipants->setChecked(false);
        navParticipants->setAutoExclusive(true);

        sidebarLayout->addWidget(navParticipants);

        navTeams = new QPushButton(sidebarFrame);
        navTeams->setObjectName("navTeams");
        navTeams->setMinimumSize(QSize(0, 38));
        navTeams->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        navTeams->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        navTeams->setCheckable(true);
        navTeams->setChecked(true);
        navTeams->setAutoExclusive(true);

        sidebarLayout->addWidget(navTeams);

        navOrganizers = new QPushButton(sidebarFrame);
        navOrganizers->setObjectName("navOrganizers");
        navOrganizers->setMinimumSize(QSize(0, 38));
        navOrganizers->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        navOrganizers->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        navOrganizers->setCheckable(true);
        navOrganizers->setChecked(false);
        navOrganizers->setAutoExclusive(true);

        sidebarLayout->addWidget(navOrganizers);

        spacer2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        sidebarLayout->addItem(spacer2);


        bodyLayout->addWidget(sidebarFrame);

        infoFrame = new QFrame(centralwidget);
        infoFrame->setObjectName("infoFrame");
        infoFrame->setMinimumSize(QSize(230, 0));
        infoFrame->setMaximumSize(QSize(250, 16777215));
        infoFrame->setFrameShape(QFrame::Shape::NoFrame);
        infoLayout = new QVBoxLayout(infoFrame);
        infoLayout->setSpacing(12);
        infoLayout->setObjectName("infoLayout");
        infoLayout->setContentsMargins(14, 12, 14, 14);
        infoHeaderLayout = new QHBoxLayout();
        infoHeaderLayout->setSpacing(8);
        infoHeaderLayout->setObjectName("infoHeaderLayout");
        infoHeaderLayout->setContentsMargins(0, 0, 0, 0);
        infoIcon = new QLabel(infoFrame);
        infoIcon->setObjectName("infoIcon");

        infoHeaderLayout->addWidget(infoIcon);

        infoTitleLayout = new QVBoxLayout();
        infoTitleLayout->setSpacing(0);
        infoTitleLayout->setObjectName("infoTitleLayout");
        infoTitleLayout->setContentsMargins(0, 0, 0, 0);
        infoTitle = new QLabel(infoFrame);
        infoTitle->setObjectName("infoTitle");

        infoTitleLayout->addWidget(infoTitle);

        infoSubtitle = new QLabel(infoFrame);
        infoSubtitle->setObjectName("infoSubtitle");

        infoTitleLayout->addWidget(infoSubtitle);


        infoHeaderLayout->addLayout(infoTitleLayout);

        spacer3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        infoHeaderLayout->addItem(spacer3);


        infoLayout->addLayout(infoHeaderLayout);

        infoLine = new QFrame(infoFrame);
        infoLine->setObjectName("infoLine");
        infoLine->setMinimumSize(QSize(0, 1));
        infoLine->setMaximumSize(QSize(16777215, 1));
        infoLine->setFrameShape(QFrame::Shape::NoFrame);

        infoLayout->addWidget(infoLine);

        teamIdLayout = new QVBoxLayout();
        teamIdLayout->setSpacing(6);
        teamIdLayout->setObjectName("teamIdLayout");
        teamIdLayout->setContentsMargins(0, 0, 0, 0);
        teamIdLabel = new QLabel(infoFrame);
        teamIdLabel->setObjectName("teamIdLabel");

        teamIdLayout->addWidget(teamIdLabel);

        teamIdEdit = new QLineEdit(infoFrame);
        teamIdEdit->setObjectName("teamIdEdit");

        teamIdLayout->addWidget(teamIdEdit);


        infoLayout->addLayout(teamIdLayout);

        teamNameLayout = new QVBoxLayout();
        teamNameLayout->setSpacing(6);
        teamNameLayout->setObjectName("teamNameLayout");
        teamNameLayout->setContentsMargins(0, 0, 0, 0);
        teamNameLabel = new QLabel(infoFrame);
        teamNameLabel->setObjectName("teamNameLabel");

        teamNameLayout->addWidget(teamNameLabel);

        teamNameEdit = new QLineEdit(infoFrame);
        teamNameEdit->setObjectName("teamNameEdit");

        teamNameLayout->addWidget(teamNameEdit);


        infoLayout->addLayout(teamNameLayout);

        membersLayout = new QVBoxLayout();
        membersLayout->setSpacing(6);
        membersLayout->setObjectName("membersLayout");
        membersLayout->setContentsMargins(0, 0, 0, 0);
        membersLabel = new QLabel(infoFrame);
        membersLabel->setObjectName("membersLabel");

        membersLayout->addWidget(membersLabel);

        membersEdit = new QLineEdit(infoFrame);
        membersEdit->setObjectName("membersEdit");

        membersLayout->addWidget(membersEdit);


        infoLayout->addLayout(membersLayout);

        leaderLayout = new QVBoxLayout();
        leaderLayout->setSpacing(6);
        leaderLayout->setObjectName("leaderLayout");
        leaderLayout->setContentsMargins(0, 0, 0, 0);
        leaderLabel = new QLabel(infoFrame);
        leaderLabel->setObjectName("leaderLabel");

        leaderLayout->addWidget(leaderLabel);

        leaderCombo = new QComboBox(infoFrame);
        leaderCombo->addItem(QString());
        leaderCombo->setObjectName("leaderCombo");

        leaderLayout->addWidget(leaderCombo);


        infoLayout->addLayout(leaderLayout);

        statusLayout = new QVBoxLayout();
        statusLayout->setSpacing(6);
        statusLayout->setObjectName("statusLayout");
        statusLayout->setContentsMargins(0, 0, 0, 0);
        statusLabel = new QLabel(infoFrame);
        statusLabel->setObjectName("statusLabel");

        statusLayout->addWidget(statusLabel);

        statusCombo = new QComboBox(infoFrame);
        statusCombo->addItem(QString());
        statusCombo->addItem(QString());
        statusCombo->addItem(QString());
        statusCombo->addItem(QString());
        statusCombo->setObjectName("statusCombo");

        statusLayout->addWidget(statusCombo);


        infoLayout->addLayout(statusLayout);

        spacer4 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        infoLayout->addItem(spacer4);

        saveButton = new QPushButton(infoFrame);
        saveButton->setObjectName("saveButton");
        saveButton->setMinimumSize(QSize(0, 42));
        saveButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        saveButton->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        infoLayout->addWidget(saveButton);


        bodyLayout->addWidget(infoFrame);

        rightLayout = new QVBoxLayout();
        rightLayout->setSpacing(10);
        rightLayout->setObjectName("rightLayout");
        rightLayout->setContentsMargins(0, 0, 0, 0);
        mgmtFrame = new QFrame(centralwidget);
        mgmtFrame->setObjectName("mgmtFrame");
        mgmtFrame->setFrameShape(QFrame::Shape::NoFrame);
        mgmtLayout = new QVBoxLayout(mgmtFrame);
        mgmtLayout->setSpacing(12);
        mgmtLayout->setObjectName("mgmtLayout");
        mgmtLayout->setContentsMargins(14, 12, 14, 12);
        mgHeaderLayout = new QHBoxLayout();
        mgHeaderLayout->setSpacing(8);
        mgHeaderLayout->setObjectName("mgHeaderLayout");
        mgHeaderLayout->setContentsMargins(0, 0, 0, 0);
        mgIcon = new QLabel(mgmtFrame);
        mgIcon->setObjectName("mgIcon");

        mgHeaderLayout->addWidget(mgIcon);

        mgTitleLayout = new QVBoxLayout();
        mgTitleLayout->setSpacing(0);
        mgTitleLayout->setObjectName("mgTitleLayout");
        mgTitleLayout->setContentsMargins(0, 0, 0, 0);
        mgTitle = new QLabel(mgmtFrame);
        mgTitle->setObjectName("mgTitle");

        mgTitleLayout->addWidget(mgTitle);

        mgSubtitle = new QLabel(mgmtFrame);
        mgSubtitle->setObjectName("mgSubtitle");

        mgTitleLayout->addWidget(mgSubtitle);


        mgHeaderLayout->addLayout(mgTitleLayout);

        spacer5 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        mgHeaderLayout->addItem(spacer5);


        mgmtLayout->addLayout(mgHeaderLayout);

        mgmtLine = new QFrame(mgmtFrame);
        mgmtLine->setObjectName("mgmtLine");
        mgmtLine->setMinimumSize(QSize(0, 1));
        mgmtLine->setMaximumSize(QSize(16777215, 1));
        mgmtLine->setFrameShape(QFrame::Shape::NoFrame);

        mgmtLayout->addWidget(mgmtLine);

        searchRowLayout = new QHBoxLayout();
        searchRowLayout->setSpacing(10);
        searchRowLayout->setObjectName("searchRowLayout");
        searchRowLayout->setContentsMargins(0, 0, 0, 0);
        searchEdit = new QLineEdit(mgmtFrame);
        searchEdit->setObjectName("searchEdit");

        searchRowLayout->addWidget(searchEdit);

        searchButton = new QPushButton(mgmtFrame);
        searchButton->setObjectName("searchButton");
        searchButton->setMinimumSize(QSize(100, 34));
        searchButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        searchButton->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        searchRowLayout->addWidget(searchButton);

        spacer6 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        searchRowLayout->addItem(spacer6);

        addTeamButton = new QPushButton(mgmtFrame);
        addTeamButton->setObjectName("addTeamButton");
        addTeamButton->setMinimumSize(QSize(118, 34));
        addTeamButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        addTeamButton->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        searchRowLayout->addWidget(addTeamButton);


        mgmtLayout->addLayout(searchRowLayout);

        teamsTable = new QTableWidget(mgmtFrame);
        if (teamsTable->columnCount() < 5)
            teamsTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        teamsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        teamsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        teamsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        teamsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        teamsTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        teamsTable->setObjectName("teamsTable");
        teamsTable->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        teamsTable->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        teamsTable->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        teamsTable->setAlternatingRowColors(false);
        teamsTable->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        teamsTable->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        teamsTable->setShowGrid(true);
        teamsTable->horizontalHeader()->setDefaultSectionSize(100);
        teamsTable->horizontalHeader()->setStretchLastSection(true);
        teamsTable->verticalHeader()->setVisible(false);

        mgmtLayout->addWidget(teamsTable);

        pagerLayout = new QHBoxLayout();
        pagerLayout->setSpacing(6);
        pagerLayout->setObjectName("pagerLayout");
        pagerLayout->setContentsMargins(0, 0, 0, 0);
        showingLabel = new QLabel(mgmtFrame);
        showingLabel->setObjectName("showingLabel");

        pagerLayout->addWidget(showingLabel);

        spacer7 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        pagerLayout->addItem(spacer7);

        firstPageButton = new QPushButton(mgmtFrame);
        firstPageButton->setObjectName("firstPageButton");
        firstPageButton->setMinimumSize(QSize(30, 28));
        firstPageButton->setMaximumSize(QSize(30, 28));
        firstPageButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        firstPageButton->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        pagerLayout->addWidget(firstPageButton);

        prevPageButton = new QPushButton(mgmtFrame);
        prevPageButton->setObjectName("prevPageButton");
        prevPageButton->setMinimumSize(QSize(30, 28));
        prevPageButton->setMaximumSize(QSize(30, 28));
        prevPageButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        prevPageButton->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        pagerLayout->addWidget(prevPageButton);

        page1Button = new QPushButton(mgmtFrame);
        page1Button->setObjectName("page1Button");
        page1Button->setMinimumSize(QSize(30, 28));
        page1Button->setMaximumSize(QSize(30, 28));
        page1Button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        page1Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        page1Button->setCheckable(true);
        page1Button->setChecked(true);

        pagerLayout->addWidget(page1Button);

        nextPageButton = new QPushButton(mgmtFrame);
        nextPageButton->setObjectName("nextPageButton");
        nextPageButton->setMinimumSize(QSize(30, 28));
        nextPageButton->setMaximumSize(QSize(30, 28));
        nextPageButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        nextPageButton->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        pagerLayout->addWidget(nextPageButton);

        lastPageButton = new QPushButton(mgmtFrame);
        lastPageButton->setObjectName("lastPageButton");
        lastPageButton->setMinimumSize(QSize(30, 28));
        lastPageButton->setMaximumSize(QSize(30, 28));
        lastPageButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        lastPageButton->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        pagerLayout->addWidget(lastPageButton);


        mgmtLayout->addLayout(pagerLayout);


        rightLayout->addWidget(mgmtFrame);

        cardsRow1Layout = new QHBoxLayout();
        cardsRow1Layout->setSpacing(10);
        cardsRow1Layout->setObjectName("cardsRow1Layout");
        cardsRow1Layout->setContentsMargins(0, 0, 0, 0);
        cardView = new QFrame(centralwidget);
        cardView->setObjectName("cardView");
        cardView->setMinimumSize(QSize(0, 56));
        cardView->setMaximumSize(QSize(16777215, 56));
        cardView->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cardView->setFrameShape(QFrame::Shape::NoFrame);
        cardViewLayout = new QHBoxLayout(cardView);
        cardViewLayout->setSpacing(10);
        cardViewLayout->setObjectName("cardViewLayout");
        cardViewLayout->setContentsMargins(14, 8, 12, 8);
        cardViewIcon = new QLabel(cardView);
        cardViewIcon->setObjectName("cardViewIcon");

        cardViewLayout->addWidget(cardViewIcon);

        cardViewTextLayout = new QVBoxLayout();
        cardViewTextLayout->setSpacing(0);
        cardViewTextLayout->setObjectName("cardViewTextLayout");
        cardViewTextLayout->setContentsMargins(0, 0, 0, 0);
        cardViewTitle = new QLabel(cardView);
        cardViewTitle->setObjectName("cardViewTitle");

        cardViewTextLayout->addWidget(cardViewTitle);

        cardViewSub = new QLabel(cardView);
        cardViewSub->setObjectName("cardViewSub");

        cardViewTextLayout->addWidget(cardViewSub);


        cardViewLayout->addLayout(cardViewTextLayout);

        spacer8 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        cardViewLayout->addItem(spacer8);

        cardViewChevron = new QLabel(cardView);
        cardViewChevron->setObjectName("cardViewChevron");

        cardViewLayout->addWidget(cardViewChevron);


        cardsRow1Layout->addWidget(cardView);

        cardEdit = new QFrame(centralwidget);
        cardEdit->setObjectName("cardEdit");
        cardEdit->setMinimumSize(QSize(0, 56));
        cardEdit->setMaximumSize(QSize(16777215, 56));
        cardEdit->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cardEdit->setFrameShape(QFrame::Shape::NoFrame);
        cardEditLayout = new QHBoxLayout(cardEdit);
        cardEditLayout->setSpacing(10);
        cardEditLayout->setObjectName("cardEditLayout");
        cardEditLayout->setContentsMargins(14, 8, 12, 8);
        cardEditIcon = new QLabel(cardEdit);
        cardEditIcon->setObjectName("cardEditIcon");

        cardEditLayout->addWidget(cardEditIcon);

        cardEditTextLayout = new QVBoxLayout();
        cardEditTextLayout->setSpacing(0);
        cardEditTextLayout->setObjectName("cardEditTextLayout");
        cardEditTextLayout->setContentsMargins(0, 0, 0, 0);
        cardEditTitle = new QLabel(cardEdit);
        cardEditTitle->setObjectName("cardEditTitle");

        cardEditTextLayout->addWidget(cardEditTitle);

        cardEditSub = new QLabel(cardEdit);
        cardEditSub->setObjectName("cardEditSub");

        cardEditTextLayout->addWidget(cardEditSub);


        cardEditLayout->addLayout(cardEditTextLayout);

        spacer9 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        cardEditLayout->addItem(spacer9);

        cardEditChevron = new QLabel(cardEdit);
        cardEditChevron->setObjectName("cardEditChevron");

        cardEditLayout->addWidget(cardEditChevron);


        cardsRow1Layout->addWidget(cardEdit);

        cardDelete = new QFrame(centralwidget);
        cardDelete->setObjectName("cardDelete");
        cardDelete->setMinimumSize(QSize(0, 56));
        cardDelete->setMaximumSize(QSize(16777215, 56));
        cardDelete->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cardDelete->setFrameShape(QFrame::Shape::NoFrame);
        cardDeleteLayout = new QHBoxLayout(cardDelete);
        cardDeleteLayout->setSpacing(10);
        cardDeleteLayout->setObjectName("cardDeleteLayout");
        cardDeleteLayout->setContentsMargins(14, 8, 12, 8);
        cardDeleteIcon = new QLabel(cardDelete);
        cardDeleteIcon->setObjectName("cardDeleteIcon");

        cardDeleteLayout->addWidget(cardDeleteIcon);

        cardDeleteTextLayout = new QVBoxLayout();
        cardDeleteTextLayout->setSpacing(0);
        cardDeleteTextLayout->setObjectName("cardDeleteTextLayout");
        cardDeleteTextLayout->setContentsMargins(0, 0, 0, 0);
        cardDeleteTitle = new QLabel(cardDelete);
        cardDeleteTitle->setObjectName("cardDeleteTitle");

        cardDeleteTextLayout->addWidget(cardDeleteTitle);

        cardDeleteSub = new QLabel(cardDelete);
        cardDeleteSub->setObjectName("cardDeleteSub");

        cardDeleteTextLayout->addWidget(cardDeleteSub);


        cardDeleteLayout->addLayout(cardDeleteTextLayout);

        spacer10 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        cardDeleteLayout->addItem(spacer10);

        cardDeleteChevron = new QLabel(cardDelete);
        cardDeleteChevron->setObjectName("cardDeleteChevron");

        cardDeleteLayout->addWidget(cardDeleteChevron);


        cardsRow1Layout->addWidget(cardDelete);

        cardPdf = new QFrame(centralwidget);
        cardPdf->setObjectName("cardPdf");
        cardPdf->setMinimumSize(QSize(0, 56));
        cardPdf->setMaximumSize(QSize(16777215, 56));
        cardPdf->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cardPdf->setFrameShape(QFrame::Shape::NoFrame);
        cardPdfLayout = new QHBoxLayout(cardPdf);
        cardPdfLayout->setSpacing(10);
        cardPdfLayout->setObjectName("cardPdfLayout");
        cardPdfLayout->setContentsMargins(14, 8, 12, 8);
        cardPdfIcon = new QLabel(cardPdf);
        cardPdfIcon->setObjectName("cardPdfIcon");

        cardPdfLayout->addWidget(cardPdfIcon);

        cardPdfTextLayout = new QVBoxLayout();
        cardPdfTextLayout->setSpacing(0);
        cardPdfTextLayout->setObjectName("cardPdfTextLayout");
        cardPdfTextLayout->setContentsMargins(0, 0, 0, 0);
        cardPdfTitle = new QLabel(cardPdf);
        cardPdfTitle->setObjectName("cardPdfTitle");

        cardPdfTextLayout->addWidget(cardPdfTitle);

        cardPdfSub = new QLabel(cardPdf);
        cardPdfSub->setObjectName("cardPdfSub");

        cardPdfTextLayout->addWidget(cardPdfSub);


        cardPdfLayout->addLayout(cardPdfTextLayout);

        spacer11 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        cardPdfLayout->addItem(spacer11);

        cardPdfChevron = new QLabel(cardPdf);
        cardPdfChevron->setObjectName("cardPdfChevron");

        cardPdfLayout->addWidget(cardPdfChevron);


        cardsRow1Layout->addWidget(cardPdf);


        rightLayout->addLayout(cardsRow1Layout);

        cardsRow2Layout = new QHBoxLayout();
        cardsRow2Layout->setSpacing(10);
        cardsRow2Layout->setObjectName("cardsRow2Layout");
        cardsRow2Layout->setContentsMargins(0, 0, 0, 0);
        cardStats = new QFrame(centralwidget);
        cardStats->setObjectName("cardStats");
        cardStats->setMinimumSize(QSize(0, 56));
        cardStats->setMaximumSize(QSize(16777215, 56));
        cardStats->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cardStats->setFrameShape(QFrame::Shape::NoFrame);
        cardStatsLayout = new QHBoxLayout(cardStats);
        cardStatsLayout->setSpacing(10);
        cardStatsLayout->setObjectName("cardStatsLayout");
        cardStatsLayout->setContentsMargins(14, 8, 12, 8);
        cardStatsIcon = new QLabel(cardStats);
        cardStatsIcon->setObjectName("cardStatsIcon");

        cardStatsLayout->addWidget(cardStatsIcon);

        cardStatsTextLayout = new QVBoxLayout();
        cardStatsTextLayout->setSpacing(0);
        cardStatsTextLayout->setObjectName("cardStatsTextLayout");
        cardStatsTextLayout->setContentsMargins(0, 0, 0, 0);
        cardStatsTitle = new QLabel(cardStats);
        cardStatsTitle->setObjectName("cardStatsTitle");

        cardStatsTextLayout->addWidget(cardStatsTitle);

        cardStatsSub = new QLabel(cardStats);
        cardStatsSub->setObjectName("cardStatsSub");

        cardStatsTextLayout->addWidget(cardStatsSub);


        cardStatsLayout->addLayout(cardStatsTextLayout);

        spacer12 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        cardStatsLayout->addItem(spacer12);

        cardStatsChevron = new QLabel(cardStats);
        cardStatsChevron->setObjectName("cardStatsChevron");

        cardStatsLayout->addWidget(cardStatsChevron);


        cardsRow2Layout->addWidget(cardStats);

        cardHistory = new QFrame(centralwidget);
        cardHistory->setObjectName("cardHistory");
        cardHistory->setMinimumSize(QSize(0, 56));
        cardHistory->setMaximumSize(QSize(16777215, 56));
        cardHistory->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cardHistory->setFrameShape(QFrame::Shape::NoFrame);
        cardHistoryLayout = new QHBoxLayout(cardHistory);
        cardHistoryLayout->setSpacing(10);
        cardHistoryLayout->setObjectName("cardHistoryLayout");
        cardHistoryLayout->setContentsMargins(14, 8, 12, 8);
        cardHistoryIcon = new QLabel(cardHistory);
        cardHistoryIcon->setObjectName("cardHistoryIcon");

        cardHistoryLayout->addWidget(cardHistoryIcon);

        cardHistoryTextLayout = new QVBoxLayout();
        cardHistoryTextLayout->setSpacing(0);
        cardHistoryTextLayout->setObjectName("cardHistoryTextLayout");
        cardHistoryTextLayout->setContentsMargins(0, 0, 0, 0);
        cardHistoryTitle = new QLabel(cardHistory);
        cardHistoryTitle->setObjectName("cardHistoryTitle");

        cardHistoryTextLayout->addWidget(cardHistoryTitle);

        cardHistorySub = new QLabel(cardHistory);
        cardHistorySub->setObjectName("cardHistorySub");

        cardHistoryTextLayout->addWidget(cardHistorySub);


        cardHistoryLayout->addLayout(cardHistoryTextLayout);

        spacer13 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        cardHistoryLayout->addItem(spacer13);

        cardHistoryChevron = new QLabel(cardHistory);
        cardHistoryChevron->setObjectName("cardHistoryChevron");

        cardHistoryLayout->addWidget(cardHistoryChevron);


        cardsRow2Layout->addWidget(cardHistory);


        rightLayout->addLayout(cardsRow2Layout);

        rightLayout->setStretch(0, 1);

        bodyLayout->addLayout(rightLayout);

        bodyLayout->setStretch(2, 1);

        rootLayout->addLayout(bodyLayout);

        rootLayout->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hackathon Management", nullptr));
        logoLabel->setText(QCoreApplication::translate("MainWindow", "\360\237\233\241\357\270\217", nullptr));
        appTitleLabel->setText(QCoreApplication::translate("MainWindow", "Hackathon Management", nullptr));
        appSubtitleLabel->setText(QCoreApplication::translate("MainWindow", "Manage all hackathons in one place", nullptr));
        bellButton->setText(QCoreApplication::translate("MainWindow", "\360\237\224\224", nullptr));
        badgeLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        avatarLabel->setText(QCoreApplication::translate("MainWindow", "\360\237\221\244", nullptr));
        organizerCombo->setItemText(0, QCoreApplication::translate("MainWindow", "Organizer", nullptr));

        navHackathons->setText(QCoreApplication::translate("MainWindow", "\360\237\223\205   Hackathons", nullptr));
        navParticipants->setText(QCoreApplication::translate("MainWindow", "\360\237\221\244   Participants", nullptr));
        navTeams->setText(QCoreApplication::translate("MainWindow", "\360\237\221\245   Teams", nullptr));
        navOrganizers->setText(QCoreApplication::translate("MainWindow", "\360\237\233\241\357\270\217   Organizers", nullptr));
        infoIcon->setText(QCoreApplication::translate("MainWindow", "\360\237\221\245", nullptr));
        infoTitle->setText(QCoreApplication::translate("MainWindow", "Team Information", nullptr));
        infoSubtitle->setText(QCoreApplication::translate("MainWindow", "Add or update team details", nullptr));
        teamIdLabel->setText(QCoreApplication::translate("MainWindow", "\360\237\217\267\357\270\217  Team ID", nullptr));
        teamIdEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter team ID", nullptr));
        teamNameLabel->setText(QCoreApplication::translate("MainWindow", "\360\237\221\245  Team Name", nullptr));
        teamNameEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter team name", nullptr));
        membersLabel->setText(QCoreApplication::translate("MainWindow", "\360\237\221\245  Number of Members", nullptr));
        membersEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter number of members", nullptr));
        leaderLabel->setText(QCoreApplication::translate("MainWindow", "\360\237\221\244  Team Leader", nullptr));
        leaderCombo->setItemText(0, QCoreApplication::translate("MainWindow", "Select team leader", nullptr));

        statusLabel->setText(QCoreApplication::translate("MainWindow", "\360\237\224\204  Status", nullptr));
        statusCombo->setItemText(0, QCoreApplication::translate("MainWindow", "Select status", nullptr));
        statusCombo->setItemText(1, QCoreApplication::translate("MainWindow", "Active", nullptr));
        statusCombo->setItemText(2, QCoreApplication::translate("MainWindow", "Inactive", nullptr));
        statusCombo->setItemText(3, QCoreApplication::translate("MainWindow", "Pending", nullptr));

        saveButton->setText(QCoreApplication::translate("MainWindow", "\360\237\222\276   Save Team", nullptr));
        mgIcon->setText(QCoreApplication::translate("MainWindow", "\360\237\221\245", nullptr));
        mgTitle->setText(QCoreApplication::translate("MainWindow", "Team Management", nullptr));
        mgSubtitle->setText(QCoreApplication::translate("MainWindow", "Manage and organize your teams efficiently", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\360\237\224\215   Search team by  name...", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "\360\237\224\215  Search", nullptr));
        addTeamButton->setText(QCoreApplication::translate("MainWindow", "\357\274\213  Add Team", nullptr));
        QTableWidgetItem *___qtablewidgetitem = teamsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = teamsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Team Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = teamsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Number of Members", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = teamsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Team Leader", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = teamsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        showingLabel->setText(QCoreApplication::translate("MainWindow", "Showing 0 to 0 of 0 teams", nullptr));
        firstPageButton->setText(QCoreApplication::translate("MainWindow", "\302\253", nullptr));
        prevPageButton->setText(QCoreApplication::translate("MainWindow", "\342\200\271", nullptr));
        page1Button->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        nextPageButton->setText(QCoreApplication::translate("MainWindow", "\342\200\272", nullptr));
        lastPageButton->setText(QCoreApplication::translate("MainWindow", "\302\273", nullptr));
        cardViewIcon->setText(QCoreApplication::translate("MainWindow", "\360\237\221\201\357\270\217", nullptr));
        cardViewTitle->setText(QCoreApplication::translate("MainWindow", "View Team", nullptr));
        cardViewSub->setText(QCoreApplication::translate("MainWindow", "See team details", nullptr));
        cardViewChevron->setText(QCoreApplication::translate("MainWindow", "\342\200\272", nullptr));
        cardEditIcon->setText(QCoreApplication::translate("MainWindow", "\342\234\217\357\270\217", nullptr));
        cardEditTitle->setText(QCoreApplication::translate("MainWindow", "Edit Team", nullptr));
        cardEditSub->setText(QCoreApplication::translate("MainWindow", "Update team info", nullptr));
        cardEditChevron->setText(QCoreApplication::translate("MainWindow", "\342\200\272", nullptr));
        cardDeleteIcon->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221\357\270\217", nullptr));
        cardDeleteTitle->setText(QCoreApplication::translate("MainWindow", "Delete Team", nullptr));
        cardDeleteSub->setText(QCoreApplication::translate("MainWindow", "Remove team", nullptr));
        cardDeleteChevron->setText(QCoreApplication::translate("MainWindow", "\342\200\272", nullptr));
        cardPdfIcon->setText(QCoreApplication::translate("MainWindow", "\360\237\223\204", nullptr));
        cardPdfTitle->setText(QCoreApplication::translate("MainWindow", "Export PDF", nullptr));
        cardPdfSub->setText(QCoreApplication::translate("MainWindow", "Download report", nullptr));
        cardPdfChevron->setText(QCoreApplication::translate("MainWindow", "\342\200\272", nullptr));
        cardStatsIcon->setText(QCoreApplication::translate("MainWindow", "\360\237\223\212", nullptr));
        cardStatsTitle->setText(QCoreApplication::translate("MainWindow", "Team Statistics", nullptr));
        cardStatsSub->setText(QCoreApplication::translate("MainWindow", "View team analytics and performance", nullptr));
        cardStatsChevron->setText(QCoreApplication::translate("MainWindow", "\342\200\272", nullptr));
        cardHistoryIcon->setText(QCoreApplication::translate("MainWindow", "\360\237\225\230", nullptr));
        cardHistoryTitle->setText(QCoreApplication::translate("MainWindow", "Team History", nullptr));
        cardHistorySub->setText(QCoreApplication::translate("MainWindow", "Track team evolution", nullptr));
        cardHistoryChevron->setText(QCoreApplication::translate("MainWindow", "\342\200\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
