//
//  iMusic.h
//  iMusic
//
//  Created by John Blaine on 11/15/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "OMain.h"

//! Project version number for iMusic.
FOUNDATION_EXPORT double iMusicVersionNumber;
//! Project version string for iMusic.
FOUNDATION_EXPORT const unsigned char iMusicVersionString[];


@interface iMusic : UIView
@property (nonatomic, retain) OMain *main;
@end

