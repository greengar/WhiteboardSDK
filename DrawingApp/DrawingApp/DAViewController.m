//
//  DAViewController.m
//  DrawingApp
//
//  Created by Elliot Lee on 6/8/13.
//  Copyright (c) 2013 GreenGar. All rights reserved.
//

#import "DAViewController.h"

@interface DAViewController ()

@end

@implementation DAViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)viewDidAppear:(BOOL)animated
{
    WBBoard *board = [[WBBoard alloc] init];
    [board showMeWithAnimationFromController:self];
}

- (void)doneEditingBoardWithResult:(UIImage *)image
{
    // Do something with image
    NSLog(@"got image %@", image);
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
