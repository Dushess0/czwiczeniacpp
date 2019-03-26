#pragma once
#include <memory>
#include <ostream>
using std::unique_ptr;

struct SmartTree
{
	int value;
	unique_ptr<SmartTree> left = nullptr;
	unique_ptr<SmartTree> right = nullptr;

};
unique_ptr<SmartTree> CreateLeaf(int value)
{
	unique_ptr<SmartTree> myLeaf(new SmartTree);
	myLeaf.get()->value = value;
	return myLeaf;
}
std::unique_ptr <SmartTree>& InsertLeftChild(std::unique_ptr<SmartTree>& tree, std::unique_ptr<SmartTree>& left_subtree)
{
	tree->left = move(left_subtree);
	return tree;
}
std::unique_ptr<SmartTree>& InsertRightChild(std::unique_ptr<SmartTree>& tree, std::unique_ptr<SmartTree>& right_subtree)
{
	tree->right = move(right_subtree);

	return tree;
}

void PrintTreeInOrder(const std::unique_ptr<SmartTree> &tree, std::ostream *out)
{
	*out << tree->value << " ";
	if (tree->left != nullptr)
		PrintTreeInOrder(tree->left, out);
	if (tree->right != nullptr)
	{
		PrintTreeInOrder(tree->right, out);
	}


}
//std::string DumpTree(const std::unique_ptr<SmartTree> &tree)
//{
//	string data;
//	data += "v"+to_string(tree->value);
//	data += "l"+to_string(tree->left);
//
//
//}
////std::unique_ptr <SmartTree> RestoreTree(const std::string &tree);