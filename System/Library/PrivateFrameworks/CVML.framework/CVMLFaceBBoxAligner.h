/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVML-Structs.h>
#import <CVML/CVMLDetector.h>

@protocol CVMLModelFile;
@interface CVMLFaceBBoxAligner : CVMLDetector {

	shared_ptr<vision::mod::FaceboxAligner>* mFaceBoxAlignerImpl;
	id<CVMLModelFile> mFaceBoxAlignerModelFileHandle;

}
+(BOOL)shouldDumpDebugIntermediates;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)processWithOptions:(id)arg1 warningRecorder:(id)arg2 error:(id*)arg3 ;
@end

