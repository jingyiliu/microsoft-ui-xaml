// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class FormSectionProperties
{
public:
    FormSectionProperties();

    static void SetBuddies(winrt::UIElement const& target, int value);
    static int GetBuddies(winrt::UIElement const& target);

    void Columns(int value);
    int Columns();

    void Header(winrt::hstring const& value);
    winrt::hstring Header();

    static void SetLength(winrt::UIElement const& target, winrt::GridLength const& value);
    static winrt::GridLength GetLength(winrt::UIElement const& target);

    static winrt::DependencyProperty BuddiesProperty() { return s_BuddiesProperty; }
    static winrt::DependencyProperty ColumnsProperty() { return s_ColumnsProperty; }
    static winrt::DependencyProperty HeaderProperty() { return s_HeaderProperty; }
    static winrt::DependencyProperty LengthProperty() { return s_LengthProperty; }

    static GlobalDependencyProperty s_BuddiesProperty;
    static GlobalDependencyProperty s_ColumnsProperty;
    static GlobalDependencyProperty s_HeaderProperty;
    static GlobalDependencyProperty s_LengthProperty;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
