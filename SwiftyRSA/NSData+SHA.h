//
//  NSData_SHA1.h
//  SwiftyRSA
//
//  Created by Paul Wilkinson on 19/04/2016.
//  Copyright © 2016 Scoop. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (NSData_SwiftyRSASHA)

- (nonnull NSData*) swiftyRSASHA1;
- (nonnull NSData*) swiftyRSASHA224;
- (nonnull NSData*) swiftyRSASHA256;
- (nonnull NSData*) swiftyRSASHA384;
- (nonnull NSData*) swiftyRSASHA512;

@end
