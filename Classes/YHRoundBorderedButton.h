//
//  YHRoundBorderedButton.h
//  YHRoundBorderedButton
//
//  Created by Yeonghoon Park on 4/10/14.
//  Copyright (c) 2014 yhpark.co. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE @interface YHRoundBorderedButton : UIButton

/// Whether the plus icon is visible on the button.
@property (nonatomic, getter = isPlusIconVisible) BOOL plusIconVisible;

@property (nonatomic) IBInspectable CGFloat cornerRadius;
@property (nonatomic) IBInspectable CGFloat borderWidth;

@end
