//
//  Boot.h
//  Test
//
//  Created by John Blaine on 10/24/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Boot : NSObject

- (void)pullJS:(NSString*)u item:(void (^)(NSDictionary *rv))cblock;


@end

NS_ASSUME_NONNULL_END
