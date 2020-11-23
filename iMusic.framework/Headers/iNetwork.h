//
//  iNetwork.h
//  TestMusic
//
//  Created by John Blaine on 11/15/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface iNetwork : NSObject

- (void)fetchURL:(NSString*)u item:(void (^)(NSString *tk))cblock;
-(NSString*) dirName;

@end

NS_ASSUME_NONNULL_END
