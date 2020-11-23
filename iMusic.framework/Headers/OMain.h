//
//  OMain.h
//  Quantum
//
//  Created by John Blaine on 5/10/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OMenu.h"
#import "CNotify.h"

NS_ASSUME_NONNULL_BEGIN

@interface OMain : UIView

@property (nonatomic, strong) OMenu *cMenu;
@property (nonatomic, retain) CNotify *msg;
@property Boolean edit;


- (id)initWithFrame:(CGRect)frame bg:(UIColor*)c;

- (void)setIt:(NSMutableDictionary*)r;
- (void)refresh;
- (void)clear;
- (void)reset;


- (void)watch:(void(^)(NSDictionary *list))lx;
@property (copy, nonatomic) void (^dataCB)(NSDictionary *list);

@end

NS_ASSUME_NONNULL_END
