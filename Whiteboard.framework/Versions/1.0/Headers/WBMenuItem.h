//
//  WBMenuItem.h
//  WhiteboardSDK
//
//  Created by Elliot Lee on 6/22/13.
//  Copyright (c) 2013 GreenGar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void (^WBCompletionBlock)(NSString *message);
typedef void (^WBMenuItemBlockWithImage)(UIImage *image, WBCompletionBlock completionBlock);
typedef void (^WBMenuItemBlockWithoutImage)(WBCompletionBlock completionBlock);

@interface WBMenuItem : NSObject

@property (copy) NSString *section;
@property (copy) NSString *name;
@property (copy) NSString *progressString;
@property (strong) WBMenuItemBlockWithImage blockWithImage;
@property (strong) WBMenuItemBlockWithoutImage blockWithoutImage;

+ (id)itemInSection:(NSString *)section name:(NSString *)name progressString:(NSString *)progressString blockWithImage:(WBMenuItemBlockWithImage)block;
+ (id)itemInSection:(NSString *)section name:(NSString *)name progressString:(NSString *)progressString blockWithoutImage:(WBMenuItemBlockWithoutImage)block;

@end
