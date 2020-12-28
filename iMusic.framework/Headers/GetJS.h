//
//  GetJS.h
//  iMusic
//
//  Created by John Blaine on 11/25/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GetJS : NSObject
- (void)readJS:(NSString*)u fDate:(NSString*)fd item:(void (^)(NSDictionary* rv))cblock;
@end

NS_ASSUME_NONNULL_END
