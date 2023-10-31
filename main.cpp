#include <cstdio>
#include <cstdlib>
#include <DirectXTex.h>
#include "TextureConverter.h"

enum Argument
{
	kApplicationPath,	// �A�v���P�[�V�����̃p�X
	kFilePath,			// �n�����t�@�C���̃p�X

	numArgument
};

int main(int argc, char* argv[]) {

	assert(argc >= numArgument);

	// com���C�u�����̏�����
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	// �e�N�X�`���R���o�[�^
	TextureConverter converter;

	// �e�N�X�`���ϊ�
	converter.ConvertTextureWICToDDS(argv[kFilePath]);

	// com���C�u�����̏I��
	CoUninitialize();

	system("pause");
	return 0;
}