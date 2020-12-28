//
//  iVideo.h
//  TestMusic
//
//  Created by John Blaine on 11/22/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "iSeek.h"

NS_ASSUME_NONNULL_BEGIN

@interface iVideo : UIView<AVAudioPlayerDelegate>
@property (nonatomic, retain) iSeek *seek;

@property (nonatomic, retain) UIButton *name;
@property (nonatomic, retain) UIButton *dscr;
@property (nonatomic, retain) UIButton *play;

@property (nonatomic, retain) UIActivityIndicatorView *indicator;

@property (nonatomic, strong) AVPlayerItem *playerItem;
@property (nonatomic, strong) AVPlayer *player;
@property (nonatomic, strong) AVPlayerLayer *videoLayer;

@property BOOL start;
@property NSString *myURL;
- (void) putMusic:(NSString *) tk cback:(void(^)(NSMutableDictionary *list))lx;


@property Float64 duration;

@end

NS_ASSUME_NONNULL_END
