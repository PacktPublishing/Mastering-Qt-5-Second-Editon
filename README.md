# Mastering Qt 5 - Second Edition (August 2018)

<a href="https://www.packtpub.com/web-development/mastering-qt-5-second-edition?utm_source=github&utm_medium=repository&utm_campaign=9781788995399"><img src="https://www.packtpub.com/sites/default/files/B10185_cover_New.png" alt="" height="256px" align="right"></a>

This is the code repository for [Mastering Qt 5 - Second Edition](https://www.packtpub.com/web-development/mastering-qt-5-second-edition?utm_source=github&utm_medium=repository&utm_campaign=9781788995399), published by Packt.

**Create stunning cross-platform applications using C++ with Qt Widgets and QML with Qt Quick**

## What is this book about?
Qt 5.11 is an app development framework that provides a great user experience and develops full capability applications with Qt Widgets, QML, and even Qt 3D. Whether you're building GUI prototypes or fully-fledged cross-platform GUI applications with a native look and feel, Mastering Qt 5 is your fastest, easiest, and most powerful solution. This book addresses various challenges and teaches you to successfully develop cross-platform applications using the Qt framework, with the help of well-organized projects.

This book covers the following exciting features: 
* Create stunning UIs with Qt Widgets and Qt Quick 2
*	Develop powerful, cross-platform applications with the Qt framework
*	Design GUIs with the Qt Designer and build a library in it for UI previews
*	Handle user interaction with the Qt signal or slot mechanism in C++
*	Prepare a cross-platform project to host a third-party library

If you feel this book is for you, get your [copy](https://www.amazon.com/dp/1788995392) today!

<a href="https://www.packtpub.com/?utm_source=github&utm_medium=banner&utm_campaign=GitHubBanner"><img src="https://raw.githubusercontent.com/PacktPublishing/GitHub/master/GitHub.png" 
alt="https://www.packtpub.com/" border="5" /></a>


## Instructions and Navigations
All of the code is organized into folders. For example, Chapter02.

The code will look like the following:
```
void MemoryWidget::updateSeries()
{
    double memoryUsed = SysInfo::instance().memoryUsed();
    mSeries->append(mPointPositionX++, memoryUsed);
    if (mSeries->count() > CHART_X_RANGE_COUNT) {
        QChart* chart = chartView().chart();
        chart->scroll(chart->plotArea().width()
            / CHART_X_RANGE_MAX, 0);
        mSeries->remove(0);
    }
}
```

**Following is what you need for this book:**
Mastering Qt 5 is for developers and programmers who want to build GUI-based applications. C++ knowledge is necessary, and knowing QT basics will help you get the most out of this book.

With the following software and hardware list you can run all code files present in the book (Chapter 1-14).

### Software and Hardware List

| Chapter  | Software and Hardware required        | OS required                        |
| -------- | ------------------------------------  | -----------------------------------|
| 1 to 14  | Qt 5.11, Xcode, Android SDK, Raspbian | Windows, Mac OS X, and Linux (Any) |
| 5 and 13 | Xcode, Android SDK                    | Windows, Mac OS X, and Linux (Any) |
| 6        | Raspbian, Raspberry Pi 3              | Windows, Mac OS X, and Linux (Any) |

### Related products <Other books you may enjoy>
* Qt 5 Projects [[Packt]](https://www.packtpub.com/application-development/qt-5-projects?utm_source=github&utm_medium=repository&utm_campaign=9781788293884) [[Amazon]](https://www.amazon.com/dp/1788293886)

* Learn QT 5 [[Packt]](https://www.packtpub.com/web-development/learn-qt-5?utm_source=github&utm_medium=repository&utm_campaign=9781788478854) [[Amazon]](https://www.amazon.com/dp/1788478851)

## Get to Know the Authors
**Guillaume Lazar** is a software engineer living in France near Paris. He has worked in different companies, from startups to multinationals, in the last 10 years. He took the opportunity to observe and learn many team organizations and technologies.

In 2014, he founded his own software development company at the age of 27. The current hierarchical organization that applies to most companies seems obsolete to him. With his own company, he wants to try a different approach.

Although he defines himself as a Qt framework lover, he likes to mix different technologies and platforms. He also spends time on game development, machine learning, and electronics, because "things" become "alive".

**Robin Penea** has been working in the software industry for a more than a decade. He worked in startups and large companies with many technologies that ranged from embedded software to web development. Armed with this experience, he wrote the Mastering Qt 5 book to spread what he loves the most about the programming craft : proper design and quality code.The teaching bug has bitten him, and he continues to share what he learned online using videos. When he is not tinkering with some new technology, he either on a wall, rock-climbing or playing music on his piano. You can reach him via Twitter @synapticrob.


## Other books by the authors
* [Mastering Qt 5](https://www.packtpub.com/application-development/mastering-qt-5?utm_source=github&utm_medium=repository&utm_campaign=9781786467126)

### Suggestions and Feedback
[Click here](https://docs.google.com/forms/d/e/1FAIpQLSdy7dATC6QmEL81FIUuymZ0Wy9vH1jHkvpY57OiMeKGqib_Ow/viewform) if you have any feedback or suggestions.

