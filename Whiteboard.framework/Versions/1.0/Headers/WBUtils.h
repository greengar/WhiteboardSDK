//
//  WBUtils.h
//  WhiteboardSDK
//
//  Created by Hector Zhao on 4/24/13.
//  Copyright (c) 2013 Greengar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

#define IS_IPAD      (UIUserInterfaceIdiomPad == UI_USER_INTERFACE_IDIOM())
#define IS_IPAD1    ((UIUserInterfaceIdiomPad == UI_USER_INTERFACE_IDIOM()) && ([UIScreen mainScreen].scale == 1.0) && (![UIImagePickerController isSourceTypeAvailable:UIImagePickerControllerSourceTypeCamera]))
#define IS_IPAD2    ((UIUserInterfaceIdiomPad == UI_USER_INTERFACE_IDIOM()) && ([UIScreen mainScreen].scale == 1.0) &&([UIImagePickerController isSourceTypeAvailable:UIImagePickerControllerSourceTypeCamera]))
#define IS_IPAD3    ((UIUserInterfaceIdiomPad == UI_USER_INTERFACE_IDIOM()) && ([UIScreen mainScreen].scale != 1.0))
#define IS_IPHONE5  ([[UIScreen mainScreen] bounds].size.height == 568)

#ifdef DEBUG
#       define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#       define DLog(...)
#endif

#define NSDEF [NSUserDefaults standardUserDefaults]

#define _(format, ...) [[NSBundle mainBundle] localizedStringForKey: [NSString stringWithFormat:@"%@", [NSString stringWithFormat:format, ##__VA_ARGS__]] value:@"" table:nil]

#define OPAQUE_HEXCOLOR(c) [UIColor colorWithRed:((c>>16)&0xFF)/255.0 green:((c>>8)&0xFF)/255.0 blue:(c&0xFF)/255.0 alpha:0.9]
#define OPAQUE_HEXCOLOR_FILL(c) [UIColor colorWithRed:((c>>16)&0xFF)/255.0 green:((c>>8)&0xFF)/255.0 blue:(c&0xFF)/255.0 alpha:1.0]

#define UnimplementedException @"UnimplementedException"
#define ArrayIndexOutOfBoundException @"ArrayIndexOutOfBoundException"

#define degreesToRadian(x) (3.14159265358979323846 * x / 180.0)
#define getDocumentPath() ([NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0])

#define	FONTS_AVAILABLE_ON_ALL_DEVICES @[@"AmericanTypewriter",@"Apple Color Emoji",@"AppleGothic",@"Arial",@"Arial Hebrew",@"Arial Rounded MT Bold",@"Bangla Sangam MN",@"Baskerville",@"Chalkboard SE",@"Cochin",@"Courier",@"Courier New" ,@"Devanagari Sangam MN",@"Futura",@"Geeza Pro",@"Georgia",@"Gujarati Sangam MN",@"Gurmukhi MN",@"Heiti SC",@"Heiti TC",@"Helvetica",@"Helvetica Neue",@"Hiragino Kaku Gothic ProN",@"Kailasa",@"Kannada Sangam MN",@"Marker Felt",@"Oriya Sangam MN",@"Palatino",@"Snell Roundhand",@"Tamil Sangam MN",@"Telugu Sangam MN",@"Times New Roman",@"Trebuchet MS",@"Verdana",@"Zapfino"]
#define kDefaultFontName @"Arial"
#define kDefaultFontSize (IS_IPAD ? 20 : 18)

#define THROW_EXCEPTION_TYPE(type) [NSException raise:type format:@"%s Line %d", __PRETTY_FUNCTION__, __LINE__];

@protocol WBBoardDelegate
@optional
- (NSString *)facebookId;
- (void)doneEditingBoardWithResult:(UIImage *)image;
- (void)exportBoardData:(NSDictionary *)data;
@end

@interface WBUtils : NSObject

+ (int)getBuildVersion;
+ (NSString*)generateUniqueId;
+ (NSString *)generateUniqueIdWithPrefix:(NSString *)prefix;
+ (NSString*)getCurrentTime;
+ (NSDate*)dateFromString:(NSString *)dateString;
+ (NSString*)stringFromDate:(NSDate *)date;
+ (NSString*)dateDiffFromInterval:(double)ti;
+ (NSString*)dateDiffFromDate:(NSDate *)date;
+ (void)changeSearchBarReturnKeyToReturn:(UISearchBar *)searchBar;
+ (void)removeSearchBarBackground:(UISearchBar *)searchBar;
+ (BOOL)isValidURL:(NSString *)urlString;
+ (int)maxValueSize;
+ (BOOL)isIOS5OrHigher;
+ (BOOL)isIOS6OrHigher;
+ (int)angleFromOrientation:(UIInterfaceOrientation)fromOrientation
              toOrientation:(UIInterfaceOrientation)toOrientation;
+ (UIImage*)rotateImage:(UIImage *)image
        withOrientation:(UIImageOrientation)orient;
+ (CABasicAnimation *)bounceAnimationFrom:(NSValue *)from
                                       to:(NSValue *)to
                               forKeyPath:(NSString *)keypath
                             withDuration:(CFTimeInterval)duration
                                 delegate:(id)delegate;
+ (NSObject *)getThingsFromClipboard;

@end
