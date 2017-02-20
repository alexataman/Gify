//
//  UIView+CircularView.h
//  Kinopoisk
//
//  Created by sasha ataman on 15.02.17.
//  Copyright © 2017 sasha ataman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (CircularView)

typedef NS_ENUM(NSInteger, RoundingMode)
{
    circle,
    withRadius
};

typedef NS_ENUM(NSInteger, RoundingMod)
{
    RoundingModCircle,
    RoundingModWithRadius,
};

- (void)applyRounding:(RoundingMode)mode;

@end
