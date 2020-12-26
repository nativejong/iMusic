//
//  Tally.h
//  TestMusic
//
//  Created by John Blaine on 11/18/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TallyCell.h"

@interface Tally : UIView<UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>

@property (nonatomic, retain) UICollectionView *tbl;
@property (nonatomic, strong) NSMutableArray *tblData;

- (id)initWithFrame:(CGRect)frame;

- (void)watch:(void(^)(NSString *list))lx;
@property (copy, nonatomic) void (^dataCB)(NSString *list);

- (void)clear;
- (void)refresh;


@end
