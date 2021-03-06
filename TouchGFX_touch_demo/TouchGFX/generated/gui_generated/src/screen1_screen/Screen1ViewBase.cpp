/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include "BitmapDatabase.hpp"

Screen1ViewBase::Screen1ViewBase()
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_BACKGROUNDS_MAIN_BG_800X480PX_ID));
    scalableImage1.setPosition(0, 0, 800, 480);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    button1.setXY(159, 292);
    button1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));

    button2.setXY(488, 292);
    button2.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));

    circleProgress1.setXY(348, 136);
    circleProgress1.setProgressIndicatorPosition(0, 0, 104, 104);
    circleProgress1.setRange(0, 100);
    circleProgress1.setCenter(52, 52);
    circleProgress1.setRadius(50);
    circleProgress1.setLineWidth(0);
    circleProgress1.setStartEndAngle(0, 360);
    circleProgress1.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_MEDIUM_CIRCLE_INDICATOR_BG_FULL_ID));
    circleProgress1Painter.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_FILL_MEDIUM_CIRCLE_INDICATOR_FILL_FULL_ID));
    circleProgress1.setPainter(circleProgress1Painter);
    circleProgress1.setValue(60);

    add(scalableImage1);
    add(button1);
    add(button2);
    add(circleProgress1);
}

void Screen1ViewBase::setupScreen()
{

}
