//
//  ColorInverterView.h
//  ImageBitmapRep
//
//  Created by Alex Nichol on 2/15/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ANImageBitmapRep.h"

@interface ColorInverterView : UIView {
#if __has_feature(objc_arc) == 1
	__strong ANImageBitmapRep * image;
#else
	ANImageBitmapRep * image;
#endif
}

- (IBAction)invert:(id)sender;

@end
