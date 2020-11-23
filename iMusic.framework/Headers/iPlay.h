//
//  iPlay.h
//  TestMusic
//
//  Created by John Blaine on 11/16/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface iPlay : UIView<AVAudioPlayerDelegate>

@property (nonatomic, retain) UIButton *play;

@property (nonatomic, retain) UIProgressView *progress;
@property (nonatomic, retain) UIActivityIndicatorView *indicator;

@property (nonatomic, strong) AVPlayerItem *playerItem;
@property (nonatomic, strong) AVPlayer *player;

@property BOOL start;
@property NSString *myURL;
- (void) putMusic:(NSString *) tk cback:(void(^)(NSMutableDictionary *list))lx;


@property Float64 duration;


@end
