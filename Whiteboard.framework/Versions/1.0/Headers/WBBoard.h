//
//  WBBoard.h
//  WhiteboardSDK
//
//  Created by Hector Zhao on 5/30/13.
//  Copyright (c) 2013 GreenGar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WBUtils.h"
#import "WBMenuItem.h"

@interface WBBoard : UIViewController

/*
 Show the board with default animation
 Recommend to call this instead of pushViewController
 @param controller UIViewController: the root view controller to push the board
 */
- (void)showMeWithAnimationFromController:(UIViewController *)controller;

/*
 Return the number of pages in the current board
 @result Return int: number of pages
 */
- (int)numOfPages;

//- (id)initWithDict:(NSDictionary *)dictionary;
- (NSDictionary *)saveToDict;
//+ (WBBoard *)loadFromDict:(NSDictionary *)dict;

@property (nonatomic, strong) NSString              *uid;
@property (nonatomic, strong) NSString              *name;
@property (nonatomic, strong) UIImage               *previewImage;
@property (nonatomic, strong) NSMutableArray        *tags;
@property (nonatomic, assign) id<WBBoardDelegate>   delegate;

- (void)addMenuItem:(WBMenuItem *)item;
- (void)doneEditing;

@end
