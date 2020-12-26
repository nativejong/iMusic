//
//  OMenuCell.h
//  Quantum
//
//  Created by John Blaine on 5/10/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "iPlay.h"
#import "iVideo.h"

NS_ASSUME_NONNULL_BEGIN

@interface OMenuCell : UICollectionViewCell
@property (nonatomic, retain) UIImageView *img;
@property (nonatomic, retain) UIActivityIndicatorView *indicator;

@property (nonatomic, retain) iVideo *play;

- (void)imgVisible:(Boolean) b;
- (void) putImage:(nullable UIImage*) c;
- (void) putImg:(NSString*) c;

- (void)taskImage:(NSString*)u date:(NSString*)d;

@end

NS_ASSUME_NONNULL_END
