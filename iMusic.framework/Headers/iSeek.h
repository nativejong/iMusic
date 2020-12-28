//
//  iSeek.h
//  TestMusic
//
//  Created by John Blaine on 12/28/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface iSeek : UIView
@property CGFloat seeekVal;

- (void)watch:(void(^)(CGFloat v))lx;
@property (copy, nonatomic) void (^dataCB)(CGFloat v);

- (void)moveVal:(CGFloat)v;

- (void) stopMusic;

@end

NS_ASSUME_NONNULL_END
