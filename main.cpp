#include <cstdio>
#include <cstdlib>
#include <DirectXTex.h>
#include "TextureConverter.h"

enum Argument
{
	kApplicationPath,	// アプリケーションのパス
	kFilePath,			// 渡されるファイルのパス

	numArgument
};

int main(int argc, char* argv[]) {

	assert(argc >= numArgument);

	// comライブラリの初期化
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	// テクスチャコンバータ
	TextureConverter converter;

	// テクスチャ変換
	converter.ConvertTextureWICToDDS(argv[kFilePath]);

	// comライブラリの終了
	CoUninitialize();

	system("pause");
	return 0;
}