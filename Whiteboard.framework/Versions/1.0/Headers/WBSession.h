//
//  SDSession.h
//  WhiteboardSDK
//
//  Created by Hector Zhao on 4/17/13.
//  Copyright (c) 2013 Greengar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WBUtils.h"

@interface WBSession : NSObject <WBBoardDelegate>

// Get the active session
+ (WBSession *)activeSession;

- (void)presentSmartboardControllerFromController:(UIViewController *)controller
                                        withImage:(UIImage *)image
                                         delegate:(id<WBSessionDelegate>)delegate;

// The SDSession's delegate
@property (nonatomic, assign) id<WBSessionDelegate> delegate;
@end
