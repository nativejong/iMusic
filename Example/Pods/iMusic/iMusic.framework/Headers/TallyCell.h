//
//  TallyCell.h
//  TestMusic
//
//  Created by John Blaine on 11/18/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface TallyCell : UICollectionViewCell

@property (nonatomic, retain) UIImageView *img;
@property (nonatomic, retain) UIButton *name;
//@property (nonatomic, retain) UIButton *line;
- (void) putImage:(NSString*)s;

@end

NS_ASSUME_NONNULL_END
