//
//  ImageUtils.h
//  ios_opencv_picture
//
//  Created by JD on 2019/7/11.
//  Copyright © 2019 JD. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JDImageUtils : NSObject

//图片二值化
+ (UIImage *)translator:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
