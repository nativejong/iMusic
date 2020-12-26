//
//  OMenu.h
//  Quantum
//
//  Created by John Blaine on 5/10/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OMenuCell.h"
#import "OPage.h"
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface OMenu : UIView<UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>

@property (nonatomic, strong) UICollectionView *myTbl;
@property (nonatomic, strong) NSMutableArray *myData;
@property (nonatomic, strong) UIColor *bgColor;

@property (nonatomic, strong) OPage *opage;

- (id)initWithFrame:(CGRect)frame bg:(UIColor*)c;

- (void)setIt:(NSMutableDictionary*)r;
- (void)refresh;
- (void)clear;

@end

NS_ASSUME_NONNULL_END
