//
//  GSButton.h
//  WhiteboardSDK
//
//  Created by Hector Zhao on 5/30/13.
//  Copyright (c) 2013 Greengar. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    BlackButtonStyle = 0,
    BlueButtonStyle,
    GreenButtonStyle,
    GrayButtonStyle,
    OrangeButtonStyle,
    TanButtonStyle,
    WhiteButtonStyle
} GSButtonStyle;

@interface GSButton : UIButton
//@property (nonatomic) BOOL isSelected;

+ (id)buttonWithType:(UIButtonType)buttonType themeStyle:(GSButtonStyle)style;

@end
