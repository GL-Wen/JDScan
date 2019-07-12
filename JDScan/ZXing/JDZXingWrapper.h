//
//  JDZXingWrapper.h
//
//  Created by WJD on 19/4/3.
//  Copyright (c) 2019 年 WJD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "ZXBarcodeFormat.h"

/*!
 *  ZXing扫码封装
 */
@interface JDZXingWrapper : NSObject

//显示预览的图片
@property (nonatomic,copy) void(^preImageBlock)(UIImage *preImage);

/**
 初始化ZXing

 @param preView 视频预览视图
 @param block 返回识别结果
 @return 返回封装对象
 */
- (instancetype)initWithPreView:(UIView*)preView block:(void(^)(ZXBarcodeFormat barcodeFormat,NSString *str,UIImage *scanImg))block;


//添加手势缩放功能
- (void)zoomForView:(UIView *)view;

/**
 设置识别区域，不设置默认全屏识别

 @param scanRect 识别区域
 */
- (void)setScanRect:(CGRect)scanRect;

/*!
 *  开始扫码
 */
- (void)start;

/*!
 *  停止扫码
 */
- (void)stop;

/*!
 *  打开关闭闪光灯
 *
 *  @param on_off YES:打开闪光灯,NO:关闭闪光灯
 */
- (void)openTorch:(BOOL)on_off;


/*!
 *  根据闪光灯状态，自动切换
 */
- (void)openOrCloseTorch;


/*!
 *  生成二维码
 *
 *  @param str  二维码字符串
 *  @param size 二维码图片大小
 *  @param format 码的类型
 *  @return 返回生成的图像
 */
+ (UIImage*)createCodeWithString:(NSString*)str
                            size:(CGSize)size
                      CodeFomart:(ZXBarcodeFormat)format;




/*!
 *  识别各种码图片
 *
 *  @param image 图像
 *  @param block 返回识别结果
 */
+ (void)recognizeImage:(UIImage*)image
                 block:(void(^)(ZXBarcodeFormat barcodeFormat,NSString *text))block;

@end
