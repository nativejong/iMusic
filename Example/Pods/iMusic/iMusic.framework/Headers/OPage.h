//
//  OPage.h
//  Quantum
//
//  Created by John Blaine on 5/21/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Tally.h"

NS_ASSUME_NONNULL_BEGIN

@interface OPage : UIView

@property (nonatomic, retain) UIButton *name;
@property (nonatomic, retain) Tally *tally;

@property (nonatomic, strong) NSMutableDictionary *myData;
@property (nonatomic, strong) NSMutableArray *myName;

@property (nonatomic, strong) UIColor *bgColor;

- (id)initWithFrame:(CGRect)frame bg:(UIColor*)c;
- (void)putMenu:(NSMutableDictionary*) gr name:(NSString*)nm;

- (void)loadPage;

//- (void) putName:(NSString*)s;
//- (void) putDscr:(NSString*)s;
//- (void) putImage:(NSString*)s;
//
//- (void) fadeIt;
//- (void) shrink;
//- (void) flip;

- (void)clear;


- (void)watchPage:(void(^)(NSDictionary *list))lx;
@property (copy, nonatomic) void (^pageCB)(NSDictionary *list);

@end

NS_ASSUME_NONNULL_END
