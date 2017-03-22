/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@class NSString, SKSoundSource;

@interface SKPlaySound : SKAction {

	NSString* _filePath;
	NSString* _fileName;
	SKCPlaySound* _mycaction;
	CGPoint _position;
	SKSoundSource* _soundSource;

}
+(id)playSoundFileNamed:(id)arg1 atPosition:(CGPoint)arg2 waitForCompletion:(BOOL)arg3 ;
+(id)_audioURLWithName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)reversedAction;
@end

