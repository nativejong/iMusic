//
//  iEncrypt.h
//  TestMusic
//
//  Created by John Blaine on 11/18/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

//#import <Foundation/Foundation.h>
//
//NS_ASSUME_NONNULL_BEGIN
//
//@interface iEncrypt : NSObject
//
//@end
//
//NS_ASSUME_NONNULL_END
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface iEncrypt : NSObject

- (void)encrypt:(NSData *)data fname:(NSString*)fn;

@end

NS_ASSUME_NONNULL_END
