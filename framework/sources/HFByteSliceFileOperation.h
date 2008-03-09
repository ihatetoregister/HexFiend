//
//  HFByteSliceFileOperation.h
//  HexFiend_2
//
//  Created by Peter Ammon on 3/9/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class HFByteSlice;

@interface HFByteSliceFileOperation : NSObject {
}

+ identityOperationWithByteSlice:(HFByteSlice *)slice targetRange:(HFRange)range;
+ externalOperationWithByteSlice:(HFByteSlice *)slice targetRange:(HFRange)range;
+ internalOperationWithByteSlice:(HFByteSlice *)slice sourceRange:(HFRange)source targetRange:(HFRange)target;

- (HFRange)sourceRange;
- (HFRange)targetRange;

@end
