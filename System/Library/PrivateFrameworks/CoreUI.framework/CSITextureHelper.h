/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CSITextureHelper : NSObject {

	csibitmap* bmp;
	CGColorSpaceRef colorspaceHint;
	unsigned long long sourceRowbytes;
	unsigned width;
	unsigned height;
	unsigned imageBytes;
	int pixelFormat;

}
-(BOOL)expandIntoBuffer:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

