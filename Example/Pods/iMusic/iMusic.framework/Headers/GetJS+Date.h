//
//  GetJS+Date.h
//  iMusic
//
//  Created by John Blaine on 11/25/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import "GetJS.h"

NS_ASSUME_NONNULL_BEGIN

@interface GetJS (Date)

- (NSString *) getFDate:(NSString*)fn;
- (NSDate*) textToDate:(NSString*) data;
- (void) ModDate:(NSString*) fname  newdate:(NSString*)d;
- (BOOL) isFileUpToDate:(NSString*)fn newdate:(NSString*)dx;


@end

NS_ASSUME_NONNULL_END
