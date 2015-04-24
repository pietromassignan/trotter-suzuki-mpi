/**
 * Distributed Trotter-Suzuki solver
 * Copyright (C) 2012 Peter Wittek, 2010-2012 Carlos Bederián
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __CPUBLOCKTEST_H
#define __CPUBLOCKTEST_H

#include <cppunit/extensions/HelperMacros.h>

class CPUBlockTest: public CppUnit::TestFixture{
	CPPUNIT_TEST_SUITE( CPUBlockTest );
	CPPUNIT_TEST( test_block_kernel_vertical );
	CPPUNIT_TEST( test_block_kernel_horizontal );
	CPPUNIT_TEST_SUITE_END(); 
	
	public:
		void setUp();
		void tearDown();
		void test_block_kernel_vertical();
		void test_block_kernel_horizontal();
};

class Matrix{
	public:
		Matrix(float *matrix_real, float *matrix_imag, int width, int height);
		bool operator ==(const Matrix &other) const;
		
	private:
		float *m_real;
		float *m_imag;
		int m_width, m_height;
};
#endif