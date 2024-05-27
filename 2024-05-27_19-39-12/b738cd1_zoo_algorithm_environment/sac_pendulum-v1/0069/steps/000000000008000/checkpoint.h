// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
namespace rl_tools::checkpoint::actor {
    namespace layer_0 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {65, 10, 4, 191, 13, 182, 28, 191, 141, 79, 4, 191, 22, 90, 120, 190, 107, 158, 70, 62, 75, 148, 233, 62, 105, 132, 87, 62, 116, 19, 121, 63, 124, 211, 100, 190, 98, 124, 14, 191, 11, 183, 120, 62, 36, 141, 1, 191, 232, 18, 228, 189, 239, 82, 117, 62, 109, 217, 59, 188, 96, 169, 50, 191, 136, 88, 144, 191, 251, 18, 62, 189, 199, 158, 241, 62, 14, 110, 61, 63, 164, 134, 177, 62, 140, 54, 189, 190, 222, 159, 5, 62, 100, 7, 13, 191, 101, 108, 42, 190, 207, 76, 54, 62, 172, 155, 57, 63, 130, 121, 74, 63, 30, 240, 93, 62, 76, 101, 6, 190, 216, 180, 60, 63, 3, 110, 25, 63, 46, 43, 111, 62, 54, 243, 186, 190, 167, 61, 186, 63, 247, 171, 147, 62, 223, 91, 149, 61, 92, 22, 36, 62, 253, 142, 50, 189, 89, 149, 191, 190, 71, 33, 38, 191, 205, 219, 186, 62, 95, 48, 50, 63, 130, 201, 129, 190, 231, 149, 177, 190, 18, 173, 161, 190, 130, 0, 167, 191, 16, 24, 137, 190, 227, 182, 53, 63, 103, 13, 230, 190, 81, 247, 125, 190, 49, 199, 207, 190, 200, 115, 57, 191, 64, 163, 68, 63, 118, 234, 8, 62, 73, 85, 88, 191, 191, 13, 175, 62, 254, 222, 3, 62, 3, 46, 244, 62, 25, 153, 223, 62, 5, 174, 1, 63, 23, 155, 147, 191, 249, 26, 93, 190, 28, 20, 68, 190, 6, 113, 152, 63, 116, 239, 18, 63, 153, 7, 4, 191, 158, 46, 203, 190, 103, 156, 216, 189, 53, 109, 76, 62, 251, 114, 120, 191, 91, 185, 155, 190, 232, 91, 48, 63, 169, 177, 140, 59, 179, 26, 23, 191, 146, 251, 106, 62, 41, 192, 117, 191, 75, 162, 172, 62, 229, 200, 191, 190, 195, 115, 132, 191, 67, 38, 93, 190, 2, 174, 249, 61, 40, 82, 13, 63, 27, 127, 81, 190, 70, 4, 154, 190, 140, 182, 99, 62, 105, 169, 122, 62, 253, 36, 47, 63, 7, 27, 147, 191, 84, 58, 207, 190, 79, 167, 171, 190, 194, 199, 160, 191, 237, 21, 12, 191, 181, 98, 26, 63, 86, 80, 121, 63, 108, 154, 162, 62};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {181, 86, 83, 191, 167, 68, 178, 190, 164, 78, 145, 61, 108, 147, 204, 190, 246, 112, 10, 63, 221, 163, 132, 189, 183, 233, 183, 190, 34, 17, 235, 190, 154, 168, 171, 189, 162, 162, 8, 188, 21, 20, 254, 190, 106, 99, 128, 190, 178, 53, 252, 190, 33, 2, 171, 61, 85, 31, 65, 191, 26, 182, 31, 190, 115, 49, 11, 191, 195, 5, 91, 190, 95, 195, 72, 62, 194, 204, 11, 63, 113, 100, 208, 62, 222, 118, 90, 190, 79, 252, 85, 63, 40, 78, 40, 62, 129, 222, 242, 62, 0, 24, 69, 62, 165, 133, 27, 190, 129, 42, 85, 62, 52, 14, 1, 63, 41, 167, 178, 190, 253, 55, 244, 189, 133, 32, 214, 62};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_0 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 3, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::RELU, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace layer_1 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {182, 210, 161, 189, 92, 173, 11, 190, 193, 246, 10, 188, 118, 245, 133, 61, 179, 141, 172, 62, 200, 170, 49, 190, 88, 26, 25, 190, 130, 243, 166, 61, 105, 13, 210, 189, 253, 202, 78, 62, 142, 31, 219, 190, 64, 42, 102, 60, 29, 182, 225, 61, 194, 216, 68, 62, 110, 238, 31, 190, 99, 195, 163, 190, 189, 129, 90, 190, 7, 170, 61, 62, 149, 104, 30, 60, 12, 115, 20, 62, 90, 97, 161, 60, 185, 103, 179, 60, 93, 180, 97, 62, 72, 144, 17, 62, 87, 142, 190, 62, 210, 52, 20, 61, 112, 43, 145, 190, 45, 57, 52, 62, 157, 188, 54, 62, 3, 232, 124, 190, 149, 219, 63, 190, 90, 151, 154, 60, 118, 78, 14, 191, 2, 37, 168, 61, 176, 254, 150, 190, 100, 249, 148, 62, 114, 194, 98, 60, 252, 74, 217, 188, 168, 61, 223, 190, 38, 174, 5, 191, 220, 2, 151, 190, 98, 125, 189, 62, 209, 5, 61, 191, 139, 132, 255, 189, 242, 196, 31, 62, 112, 241, 205, 61, 233, 76, 11, 189, 204, 190, 245, 190, 185, 87, 135, 190, 81, 12, 76, 62, 25, 74, 193, 189, 20, 52, 197, 61, 76, 51, 57, 62, 210, 103, 42, 190, 253, 9, 195, 61, 162, 203, 185, 189, 219, 135, 222, 61, 33, 46, 169, 62, 156, 235, 135, 190, 52, 162, 80, 60, 175, 169, 237, 61, 58, 245, 97, 189, 153, 56, 100, 191, 199, 212, 76, 190, 69, 254, 208, 188, 1, 136, 195, 190, 215, 119, 147, 62, 161, 1, 108, 188, 44, 0, 52, 188, 158, 231, 254, 190, 115, 145, 10, 62, 73, 254, 180, 62, 60, 127, 126, 62, 194, 5, 183, 62, 127, 40, 186, 62, 42, 252, 180, 190, 148, 58, 49, 190, 107, 242, 204, 189, 191, 113, 138, 62, 59, 209, 252, 190, 2, 4, 253, 60, 31, 196, 206, 60, 228, 100, 145, 62, 5, 23, 51, 62, 31, 249, 117, 190, 77, 133, 134, 190, 139, 155, 172, 190, 108, 99, 109, 62, 122, 253, 237, 187, 198, 20, 25, 59, 218, 169, 62, 189, 177, 73, 64, 61, 30, 58, 151, 189, 106, 55, 123, 62, 192, 54, 86, 61, 167, 51, 184, 62, 27, 179, 238, 189, 101, 193, 232, 189, 85, 93, 142, 190, 107, 211, 151, 61, 222, 43, 1, 190, 3, 69, 8, 61, 130, 218, 57, 62, 27, 141, 43, 190, 41, 187, 16, 190, 235, 20, 189, 61, 31, 10, 171, 62, 177, 90, 170, 190, 4, 165, 148, 61, 115, 100, 29, 62, 209, 160, 11, 61, 204, 67, 21, 190, 183, 191, 180, 59, 213, 95, 11, 62, 81, 88, 120, 62, 85, 41, 234, 61, 170, 14, 216, 189, 77, 212, 47, 190, 120, 79, 196, 189, 112, 139, 221, 190, 187, 170, 141, 190, 96, 211, 124, 62, 44, 34, 196, 189, 70, 150, 166, 190, 87, 30, 235, 61, 186, 105, 104, 62, 68, 145, 231, 189, 70, 107, 93, 61, 72, 66, 249, 190, 125, 3, 5, 62, 102, 189, 182, 188, 251, 190, 218, 62, 194, 99, 103, 189, 126, 251, 73, 190, 209, 111, 129, 190, 201, 186, 133, 61, 224, 252, 149, 190, 19, 130, 136, 62, 128, 128, 128, 191, 232, 208, 16, 189, 54, 218, 245, 61, 127, 94, 166, 61, 142, 127, 14, 62, 74, 16, 134, 191, 177, 108, 131, 62, 54, 180, 48, 62, 235, 224, 233, 188, 236, 140, 160, 61, 110, 124, 96, 62, 164, 44, 142, 186, 146, 78, 126, 62, 39, 37, 165, 189, 116, 145, 143, 61, 166, 118, 76, 62, 134, 144, 24, 191, 239, 105, 179, 60, 38, 113, 51, 61, 12, 18, 151, 62, 41, 208, 4, 191, 186, 202, 149, 190, 141, 205, 115, 60, 21, 94, 245, 189, 72, 71, 71, 61, 196, 112, 240, 60, 16, 95, 202, 188, 87, 76, 45, 189, 23, 249, 77, 61, 2, 59, 174, 61, 210, 119, 192, 61, 232, 58, 232, 190, 42, 99, 200, 61, 233, 23, 13, 59, 34, 41, 4, 62, 31, 240, 207, 189, 126, 26, 84, 62, 135, 235, 142, 190, 70, 225, 62, 190, 23, 245, 203, 61, 123, 252, 6, 189, 3, 33, 98, 190, 20, 104, 124, 190, 159, 27, 24, 190, 33, 131, 74, 190, 92, 83, 140, 189, 201, 29, 62, 62, 93, 125, 75, 190, 4, 221, 16, 61, 106, 240, 78, 62, 16, 132, 226, 189, 214, 149, 81, 190, 254, 92, 229, 60, 14, 99, 18, 189, 7, 38, 240, 189, 137, 77, 171, 189, 196, 196, 111, 190, 115, 240, 9, 190, 39, 138, 230, 61, 171, 2, 116, 59, 173, 138, 191, 189, 173, 2, 138, 189, 240, 37, 13, 190, 229, 244, 236, 59, 53, 137, 197, 188, 83, 76, 250, 61, 109, 205, 198, 61, 182, 96, 47, 190, 165, 166, 108, 189, 131, 42, 44, 62, 83, 21, 52, 190, 192, 78, 160, 188, 63, 197, 14, 190, 176, 85, 227, 189, 94, 208, 200, 61, 144, 160, 137, 188, 59, 57, 32, 190, 173, 221, 235, 189, 44, 75, 230, 189, 74, 116, 18, 190, 187, 199, 171, 189, 179, 187, 85, 190, 16, 188, 114, 188, 14, 190, 11, 62, 7, 174, 28, 190, 172, 207, 243, 61, 49, 34, 143, 190, 66, 251, 98, 61, 233, 245, 183, 190, 5, 189, 38, 190, 102, 35, 95, 189, 176, 116, 60, 189, 209, 126, 250, 189, 182, 70, 190, 189, 21, 141, 89, 190, 209, 42, 63, 190, 64, 88, 15, 191, 236, 187, 129, 62, 134, 195, 202, 189, 40, 55, 177, 61, 192, 196, 18, 190, 21, 223, 240, 189, 157, 140, 115, 189, 80, 192, 197, 61, 68, 221, 205, 188, 15, 101, 107, 61, 144, 152, 51, 62, 224, 240, 224, 61, 196, 1, 126, 62, 191, 203, 55, 62, 15, 224, 137, 62, 153, 9, 156, 61, 114, 202, 16, 60, 77, 243, 104, 59, 104, 237, 113, 61, 236, 211, 109, 189, 13, 65, 115, 61, 27, 138, 56, 190, 14, 110, 162, 188, 249, 255, 10, 62, 230, 85, 148, 189, 132, 153, 127, 61, 131, 72, 36, 190, 66, 212, 161, 189, 211, 245, 32, 190, 134, 165, 51, 190, 187, 173, 239, 61, 151, 1, 11, 190, 128, 232, 26, 61, 44, 83, 100, 61, 147, 26, 46, 61, 106, 103, 33, 190, 154, 211, 40, 190, 192, 194, 40, 190, 207, 96, 153, 61, 188, 185, 16, 61, 31, 154, 253, 189, 195, 206, 235, 188, 228, 50, 171, 189, 76, 104, 16, 189, 216, 152, 229, 61, 162, 231, 32, 62, 54, 169, 203, 189, 24, 59, 212, 60, 51, 57, 91, 61, 185, 92, 100, 60, 191, 55, 11, 189, 110, 137, 52, 190, 98, 91, 22, 189, 246, 40, 209, 189, 192, 153, 148, 61, 104, 34, 247, 189, 141, 22, 210, 62, 228, 109, 249, 61, 32, 217, 106, 62, 197, 243, 75, 190, 214, 109, 252, 190, 240, 245, 113, 62, 135, 168, 73, 190, 216, 192, 190, 190, 1, 28, 156, 189, 193, 64, 136, 190, 9, 1, 207, 188, 85, 147, 155, 190, 151, 218, 101, 189, 10, 215, 199, 190, 32, 188, 15, 61, 189, 109, 151, 190, 63, 53, 132, 189, 193, 230, 168, 190, 42, 6, 3, 190, 125, 17, 76, 190, 241, 93, 163, 62, 155, 242, 1, 62, 63, 242, 73, 61, 109, 64, 145, 61, 14, 6, 122, 189, 111, 101, 143, 62, 245, 113, 129, 62, 201, 94, 124, 189, 57, 228, 200, 60, 186, 174, 23, 191, 210, 251, 130, 62, 123, 169, 240, 189, 182, 124, 73, 62, 155, 224, 231, 189, 89, 202, 199, 59, 56, 92, 1, 62, 64, 234, 99, 61, 108, 239, 31, 62, 250, 189, 19, 61, 96, 218, 152, 62, 17, 10, 107, 62, 239, 14, 214, 188, 11, 41, 167, 189, 198, 19, 150, 189, 76, 98, 25, 190, 116, 46, 61, 62, 138, 90, 94, 190, 181, 174, 7, 61, 197, 102, 194, 61, 36, 64, 86, 188, 113, 169, 215, 59, 255, 10, 109, 189, 222, 221, 43, 190, 206, 155, 79, 190, 233, 74, 210, 61, 118, 52, 4, 62, 28, 247, 87, 62, 9, 14, 137, 188, 236, 110, 206, 188, 230, 252, 100, 190, 215, 168, 72, 62, 204, 107, 178, 62, 207, 65, 113, 190, 167, 151, 176, 60, 6, 5, 149, 189, 64, 172, 73, 189, 80, 32, 112, 61, 70, 137, 63, 61, 92, 221, 183, 190, 166, 177, 222, 189, 165, 254, 17, 191, 92, 65, 228, 61, 33, 248, 223, 189, 85, 61, 138, 190, 200, 200, 138, 61, 206, 12, 203, 60, 95, 10, 79, 190, 220, 50, 233, 190, 80, 17, 21, 190, 5, 236, 59, 190, 46, 37, 14, 190, 124, 9, 131, 60, 31, 241, 149, 62, 151, 94, 158, 190, 74, 17, 220, 62, 144, 45, 150, 188, 192, 228, 47, 62, 188, 30, 5, 55, 223, 66, 79, 189, 130, 56, 10, 61, 26, 162, 172, 62, 179, 45, 130, 189, 159, 170, 67, 190, 81, 107, 208, 61, 55, 202, 23, 191, 61, 178, 117, 188, 121, 190, 158, 62, 22, 229, 185, 61, 170, 108, 227, 188, 24, 66, 19, 190, 252, 105, 129, 62, 161, 100, 215, 61, 139, 64, 63, 62, 109, 107, 29, 62, 175, 13, 222, 62, 192, 240, 166, 61, 129, 86, 117, 61, 114, 128, 21, 62, 89, 234, 133, 190, 27, 39, 98, 190, 172, 250, 5, 190, 85, 231, 70, 62, 103, 5, 218, 62, 19, 146, 60, 62, 153, 120, 75, 61, 56, 183, 60, 62, 230, 238, 48, 190, 186, 204, 156, 190, 166, 115, 156, 189, 116, 238, 75, 62, 23, 57, 205, 61, 83, 219, 155, 62, 198, 120, 200, 61, 137, 234, 45, 190, 65, 32, 147, 190, 68, 163, 134, 62, 33, 141, 71, 189, 144, 5, 47, 191, 212, 3, 194, 62, 142, 183, 78, 190, 164, 83, 167, 61, 181, 21, 190, 61, 24, 75, 66, 62, 84, 36, 87, 62, 41, 176, 124, 62, 114, 160, 164, 62, 106, 244, 213, 62, 252, 181, 11, 190, 29, 65, 32, 190, 93, 123, 191, 189, 41, 242, 244, 190, 94, 159, 120, 62, 15, 74, 4, 191, 198, 5, 235, 190, 69, 170, 216, 60, 243, 146, 240, 61, 187, 95, 106, 190, 122, 46, 20, 190, 246, 130, 7, 62, 196, 101, 128, 190, 243, 41, 7, 187, 179, 16, 11, 191, 233, 237, 73, 62, 230, 215, 250, 189, 227, 87, 165, 61, 148, 72, 230, 190, 173, 190, 175, 62, 162, 197, 151, 62, 27, 7, 144, 188, 154, 9, 109, 191, 191, 212, 177, 62, 238, 194, 210, 189, 162, 70, 8, 62, 107, 253, 218, 62, 158, 75, 251, 60, 233, 64, 136, 62, 12, 60, 193, 62, 118, 159, 32, 62, 225, 224, 180, 62, 45, 214, 236, 190, 110, 198, 106, 61, 120, 254, 79, 189, 72, 155, 207, 190, 189, 185, 90, 189, 251, 112, 32, 191, 64, 145, 145, 190, 14, 203, 217, 189, 153, 63, 129, 61, 101, 91, 19, 190, 150, 58, 55, 191, 245, 197, 51, 62, 230, 187, 41, 190, 86, 88, 28, 188, 72, 116, 115, 191, 36, 153, 105, 62, 89, 133, 182, 189, 149, 181, 3, 190, 229, 105, 245, 190, 2, 169, 40, 62, 102, 109, 110, 60, 134, 75, 43, 62, 49, 202, 96, 191, 172, 226, 178, 62, 154, 226, 154, 190, 253, 3, 179, 61, 186, 189, 218, 60, 154, 241, 91, 62, 87, 234, 230, 62, 151, 158, 228, 189, 124, 138, 39, 62, 100, 71, 170, 61, 235, 161, 28, 191, 140, 36, 87, 60, 173, 56, 132, 62, 124, 224, 167, 190, 188, 251, 187, 188, 122, 171, 207, 190, 85, 235, 212, 61, 50, 40, 186, 62, 32, 224, 81, 190, 111, 203, 90, 190, 204, 54, 63, 191, 232, 169, 133, 62, 58, 146, 227, 190, 194, 138, 194, 189, 225, 246, 150, 190, 80, 56, 113, 62, 207, 244, 199, 59, 56, 50, 21, 190, 105, 38, 0, 191, 50, 148, 141, 62, 95, 45, 120, 62, 97, 79, 22, 61, 70, 179, 131, 60, 146, 252, 108, 190, 14, 127, 74, 62, 75, 26, 191, 189, 20, 135, 99, 190, 176, 196, 35, 62, 29, 141, 237, 60, 15, 55, 123, 60, 241, 229, 183, 190, 173, 198, 50, 190, 217, 139, 38, 62, 3, 60, 253, 61, 4, 156, 131, 60, 104, 192, 252, 59, 47, 66, 62, 62, 108, 190, 38, 190, 127, 12, 223, 61, 168, 128, 244, 61, 254, 22, 58, 189, 243, 99, 51, 62, 128, 45, 79, 62, 42, 172, 196, 62, 170, 170, 212, 61, 227, 108, 157, 61, 90, 238, 34, 190, 67, 173, 11, 190, 191, 93, 173, 190, 17, 140, 190, 189, 0, 155, 107, 58, 202, 216, 40, 191, 189, 137, 6, 61, 162, 48, 157, 189, 31, 150, 168, 189, 160, 95, 125, 189, 144, 62, 7, 190, 32, 75, 24, 190, 44, 194, 7, 190, 59, 8, 9, 62, 6, 18, 39, 61, 102, 190, 206, 61, 42, 163, 50, 189, 244, 181, 178, 61, 167, 247, 147, 61, 210, 237, 101, 61, 64, 132, 107, 190, 218, 79, 0, 190, 164, 67, 234, 61, 97, 59, 125, 59, 25, 115, 32, 190, 42, 7, 7, 190, 43, 113, 221, 189, 112, 120, 140, 60, 183, 6, 104, 59, 199, 128, 126, 189, 216, 42, 34, 189, 97, 211, 17, 190, 98, 212, 21, 189, 105, 56, 171, 61, 61, 228, 33, 61, 125, 69, 215, 61, 22, 83, 155, 61, 175, 192, 6, 189, 87, 182, 32, 190, 25, 55, 141, 190, 196, 199, 52, 62, 43, 76, 134, 190, 64, 64, 40, 189, 100, 116, 60, 190, 177, 132, 44, 62, 247, 144, 106, 189, 91, 20, 186, 190, 202, 130, 29, 190, 70, 211, 10, 190, 113, 129, 214, 190, 90, 71, 36, 61, 233, 62, 249, 189, 43, 3, 174, 61, 202, 110, 158, 59, 46, 231, 55, 62, 74, 180, 34, 62, 76, 107, 27, 62, 144, 84, 135, 190, 19, 117, 140, 61, 106, 155, 46, 62, 95, 197, 65, 62, 102, 216, 37, 61, 129, 33, 157, 60, 184, 242, 170, 62, 51, 1, 133, 61, 72, 159, 235, 61, 123, 95, 12, 190, 22, 251, 55, 61, 23, 23, 217, 60, 113, 232, 18, 190, 20, 118, 118, 189, 7, 252, 50, 61, 104, 228, 63, 190, 86, 115, 245, 59, 236, 126, 184, 189, 96, 22, 236, 61, 190, 24, 11, 190, 248, 226, 197, 62, 250, 203, 155, 62, 26, 72, 253, 61, 7, 73, 12, 191, 48, 227, 8, 63, 187, 70, 74, 190, 119, 100, 129, 61, 223, 188, 138, 191, 244, 78, 15, 189, 134, 92, 117, 190, 3, 95, 165, 61, 214, 247, 192, 190, 125, 4, 154, 189, 208, 71, 146, 189, 24, 8, 29, 190, 134, 138, 166, 189, 123, 32, 10, 62, 203, 159, 93, 190, 242, 101, 31, 190, 63, 113, 163, 189, 57, 36, 129, 190, 192, 218, 155, 188, 68, 46, 141, 62, 145, 245, 22, 188, 178, 239, 236, 61, 143, 28, 30, 62, 166, 1, 186, 61, 206, 38, 119, 61, 31, 28, 93, 190, 134, 203, 24, 190, 92, 60, 93, 62, 79, 39, 90, 61, 92, 112, 107, 190, 130, 101, 206, 61, 40, 175, 174, 61, 96, 206, 166, 60, 217, 28, 207, 190, 48, 133, 232, 189, 93, 190, 149, 60, 156, 146, 172, 189, 85, 198, 62, 190, 141, 161, 4, 188, 109, 221, 186, 190, 67, 8, 162, 189, 142, 98, 75, 188, 234, 188, 30, 62, 237, 119, 120, 62, 168, 111, 144, 189, 215, 232, 81, 62, 149, 72, 7, 187, 142, 133, 103, 62, 89, 171, 207, 61, 60, 125, 160, 189, 28, 15, 31, 190, 107, 238, 20, 187, 184, 114, 94, 189, 21, 20, 9, 190, 90, 229, 240, 61, 128, 173, 248, 189, 56, 140, 155, 189, 163, 130, 50, 190, 25, 201, 234, 189, 36, 71, 126, 61, 116, 150, 196, 189, 35, 29, 85, 189, 18, 57, 17, 62, 134, 200, 181, 188, 38, 32, 245, 61, 109, 115, 201, 188, 226, 83, 156, 61, 15, 133, 128, 187, 209, 234, 39, 190, 147, 57, 22, 62, 173, 91, 220, 188, 224, 46, 205, 61, 67, 135, 11, 190, 139, 78, 32, 59, 191, 152, 120, 189, 222, 203, 40, 190, 157, 85, 42, 189, 53, 232, 180, 188, 90, 53, 114, 61, 132, 142, 136, 189, 57, 170, 143, 189, 183, 120, 49, 190, 172, 118, 5, 61, 153, 49, 146, 60, 145, 186, 94, 189, 225, 141, 0, 190, 247, 55, 89, 60, 8, 162, 207, 190, 79, 113, 212, 62, 59, 59, 101, 190, 101, 118, 131, 189, 74, 217, 176, 61, 24, 64, 13, 62, 131, 23, 198, 190, 115, 116, 22, 191, 58, 155, 167, 190, 165, 49, 213, 59, 157, 106, 17, 191, 240, 63, 243, 61, 43, 152, 45, 61, 147, 94, 156, 62, 23, 233, 213, 61, 252, 30, 191, 59, 170, 163, 166, 62, 86, 196, 72, 60, 84, 196, 183, 189, 188, 181, 214, 61, 96, 200, 44, 62, 152, 138, 90, 62, 64, 158, 169, 62, 193, 17, 63, 62, 60, 214, 54, 62, 249, 110, 249, 61, 47, 73, 29, 190, 99, 217, 168, 190, 46, 240, 30, 188, 208, 142, 199, 62, 156, 245, 120, 60, 135, 69, 164, 189, 62, 84, 146, 188, 198, 190, 64, 189, 65, 79, 37, 187, 219, 206, 233, 189, 1, 147, 79, 61, 213, 190, 244, 60, 62, 121, 169, 61, 218, 38, 182, 189, 13, 77, 1, 190, 216, 102, 15, 62, 243, 200, 244, 188, 123, 157, 39, 190, 120, 34, 170, 189, 206, 174, 14, 189, 108, 229, 90, 60, 243, 79, 1, 190, 206, 0, 7, 189, 245, 74, 130, 61, 144, 63, 221, 61, 106, 140, 42, 190, 248, 224, 36, 190, 242, 6, 248, 189, 59, 62, 72, 189, 43, 24, 240, 188, 192, 199, 90, 61, 36, 54, 248, 189, 6, 131, 12, 190, 61, 143, 142, 188, 196, 71, 60, 189, 37, 202, 132, 189, 157, 84, 128, 61, 29, 145, 4, 189, 119, 59, 154, 190, 43, 92, 26, 62, 40, 8, 67, 61, 144, 157, 14, 62, 174, 22, 191, 61, 229, 124, 33, 62, 169, 144, 231, 190, 194, 61, 170, 190, 181, 92, 210, 190, 254, 22, 72, 190, 162, 214, 100, 191, 159, 56, 92, 190, 76, 131, 57, 189, 46, 245, 2, 63, 251, 238, 123, 189, 20, 8, 167, 189, 113, 224, 213, 189, 4, 118, 122, 62, 18, 214, 104, 190, 170, 20, 32, 190, 210, 174, 165, 62, 76, 81, 7, 190, 193, 224, 149, 62, 109, 198, 80, 62, 11, 64, 238, 61, 235, 125, 137, 62, 44, 95, 102, 190, 121, 213, 77, 61, 223, 42, 155, 189, 125, 199, 77, 62, 84, 143, 160, 189, 222, 219, 23, 189, 181, 131, 9, 189, 139, 75, 67, 60, 16, 131, 2, 190, 80, 155, 155, 61, 73, 53, 43, 189, 38, 48, 57, 187, 213, 198, 237, 189, 145, 238, 129, 189, 42, 72, 207, 60, 15, 217, 108, 189, 23, 139, 137, 61, 38, 65, 16, 190, 255, 107, 175, 61, 42, 179, 126, 189, 77, 186, 143, 58, 117, 171, 56, 61, 101, 58, 174, 61, 95, 164, 38, 61, 42, 230, 181, 59, 10, 159, 37, 189, 92, 37, 115, 189, 159, 161, 10, 61, 245, 92, 207, 188, 237, 235, 222, 189, 232, 116, 5, 190, 254, 184, 48, 190, 144, 245, 62, 188, 171, 234, 169, 188, 180, 133, 96, 187, 225, 197, 74, 61, 44, 121, 248, 61, 147, 174, 40, 62, 13, 255, 64, 189, 136, 75, 42, 61, 73, 14, 214, 189, 28, 99, 9, 190, 160, 213, 65, 60, 49, 78, 135, 189, 71, 53, 141, 189, 45, 77, 240, 61, 19, 75, 196, 59, 169, 86, 168, 189, 197, 153, 19, 190, 97, 169, 40, 189, 172, 155, 43, 190, 177, 215, 245, 61, 72, 243, 195, 61, 210, 216, 199, 61, 216, 99, 153, 189, 127, 219, 31, 190, 155, 122, 158, 61, 128, 15, 42, 189, 26, 25, 236, 188, 140, 124, 0, 190, 16, 146, 70, 60, 238, 150, 136, 61, 147, 198, 54, 190, 8, 168, 65, 189, 48, 39, 13, 62, 220, 52, 155, 61, 22, 139, 19, 190, 194, 36, 59, 190, 127, 78, 174, 189, 216, 24, 49, 190, 17, 112, 143, 190, 167, 173, 113, 62, 150, 178, 210, 190, 198, 212, 40, 63, 5, 95, 34, 62, 243, 161, 247, 190, 77, 17, 197, 190, 150, 129, 234, 189, 212, 99, 161, 190, 254, 228, 233, 61, 59, 130, 54, 191, 168, 225, 98, 62, 90, 251, 27, 189, 153, 145, 148, 62, 243, 117, 27, 191, 232, 178, 50, 191, 242, 181, 194, 190, 214, 152, 38, 62, 74, 64, 148, 190, 151, 8, 81, 62, 234, 10, 62, 62, 45, 28, 146, 61, 236, 113, 0, 60, 72, 114, 183, 189, 129, 24, 115, 61, 59, 220, 4, 62, 171, 33, 11, 191, 80, 237, 73, 190, 42, 208, 250, 61, 172, 10, 87, 189, 97, 18, 171, 190, 114, 64, 136, 190, 34, 140, 239, 189, 170, 238, 185, 61, 28, 84, 150, 62, 137, 166, 180, 61, 117, 41, 235, 186, 73, 138, 112, 190, 111, 200, 223, 190, 56, 241, 251, 61, 171, 190, 166, 189, 134, 60, 167, 189, 21, 174, 36, 191, 231, 112, 173, 62, 71, 62, 83, 189, 84, 11, 232, 61, 22, 133, 46, 190, 82, 158, 9, 190, 93, 58, 149, 190, 96, 227, 39, 61, 153, 8, 52, 190, 47, 187, 177, 61, 31, 32, 13, 191, 106, 241, 239, 188, 174, 227, 12, 61, 38, 172, 171, 61, 45, 95, 45, 60, 254, 177, 146, 190, 166, 27, 154, 190, 138, 185, 50, 62, 233, 30, 250, 60, 27, 50, 225, 190, 0, 156, 105, 190, 153, 65, 47, 62, 79, 244, 37, 191, 204, 71, 111, 62, 128, 195, 1, 191, 240, 30, 69, 61, 44, 80, 80, 61, 136, 245, 183, 189, 35, 184, 67, 61, 251, 1, 0, 190, 180, 3, 186, 189, 127, 214, 99, 190, 155, 179, 54, 190, 250, 226, 156, 62, 209, 71, 34, 61, 188, 138, 27, 62, 171, 42, 194, 189, 210, 159, 75, 191, 197, 23, 151, 189, 31, 88, 241, 61, 112, 138, 217, 190, 86, 53, 51, 62, 169, 221, 255, 190, 20, 234, 53, 189, 70, 229, 51, 62, 130, 232, 22, 190, 115, 130, 9, 62, 97, 2, 57, 190, 133, 65, 82, 190, 15, 59, 22, 190, 212, 47, 130, 62, 227, 217, 192, 189, 102, 56, 63, 191, 163, 81, 140, 190, 169, 195, 207, 189, 108, 123, 180, 62, 136, 34, 22, 190, 63, 93, 13, 190, 20, 205, 5, 62, 203, 76, 69, 189, 240, 226, 146, 189, 160, 35, 113, 190, 73, 119, 234, 61, 105, 118, 142, 61, 88, 57, 0, 191, 179, 111, 162, 61, 149, 152, 48, 62, 88, 225, 172, 60, 252, 7, 62, 62, 146, 176, 82, 189, 142, 51, 105, 189, 44, 15, 57, 62, 233, 51, 218, 190, 10, 94, 85, 189, 37, 206, 149, 189, 116, 206, 15, 62, 18, 102, 36, 62, 46, 53, 61, 61, 73, 10, 145, 62, 108, 175, 211, 189, 199, 133, 161, 190, 100, 7, 149, 61, 39, 64, 48, 190, 88, 72, 175, 62, 241, 64, 170, 189, 34, 237, 135, 190, 191, 251, 78, 61, 6, 190, 13, 191, 201, 243, 8, 190, 215, 166, 38, 62, 232, 12, 131, 62, 167, 26, 114, 62, 223, 107, 1, 61, 42, 97, 162, 189, 11, 225, 186, 61, 168, 254, 52, 191, 25, 21, 228, 189, 45, 148, 200, 189, 244, 149, 44, 62, 185, 37, 158, 189, 43, 162, 155, 189, 116, 65, 122, 60, 70, 139, 142, 189, 143, 104, 149, 190, 92, 149, 66, 189, 248, 154, 194, 61, 212, 174, 110, 190, 243, 137, 128, 190, 165, 11, 162, 62, 174, 1, 129, 61, 85, 52, 128, 61, 238, 241, 151, 190, 132, 51, 255, 61, 136, 197, 228, 61, 238, 161, 1, 62, 213, 60, 225, 189, 119, 104, 47, 60, 172, 1, 175, 189};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {79, 104, 197, 62, 157, 98, 155, 188, 64, 103, 168, 61, 80, 12, 2, 62, 146, 73, 45, 62, 149, 243, 153, 190, 170, 229, 45, 61, 54, 4, 98, 62, 124, 64, 142, 187, 29, 184, 24, 62, 37, 183, 44, 62, 105, 117, 125, 62, 120, 141, 140, 62, 221, 253, 140, 62, 130, 235, 108, 62, 192, 111, 186, 61, 58, 83, 185, 189, 64, 89, 132, 189, 33, 247, 123, 62, 4, 89, 182, 61, 83, 183, 170, 62, 166, 18, 149, 188, 73, 192, 234, 189, 92, 4, 253, 189, 162, 14, 76, 62, 140, 153, 12, 190, 145, 24, 247, 189, 33, 231, 95, 62, 139, 45, 2, 190, 219, 172, 144, 189, 69, 159, 149, 60, 239, 235, 15, 62};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_1 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 32, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::RELU, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace layer_2 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {28, 56, 34, 62, 39, 62, 66, 63, 223, 155, 233, 190, 157, 1, 74, 190, 202, 61, 85, 63, 145, 111, 135, 189, 229, 66, 174, 61, 191, 153, 148, 62, 100, 235, 158, 61, 104, 158, 59, 63, 89, 120, 226, 189, 143, 177, 80, 62, 51, 185, 135, 190, 142, 202, 70, 191, 255, 185, 135, 191, 19, 119, 97, 191, 215, 126, 41, 62, 65, 146, 243, 189, 174, 253, 145, 62, 201, 93, 11, 63, 156, 145, 113, 60, 137, 219, 214, 61, 138, 107, 185, 62, 178, 202, 35, 190, 88, 216, 8, 63, 173, 31, 35, 62, 57, 39, 181, 189, 141, 110, 66, 63, 195, 112, 15, 191, 86, 53, 43, 63, 67, 136, 173, 62, 218, 103, 130, 189, 195, 130, 215, 190, 141, 202, 142, 189, 247, 146, 201, 59, 93, 244, 4, 62, 158, 203, 6, 62, 155, 233, 239, 189, 164, 44, 143, 61, 181, 241, 87, 189, 134, 177, 94, 60, 147, 243, 129, 62, 170, 187, 213, 189, 230, 27, 17, 191, 202, 77, 167, 188, 172, 117, 156, 61, 228, 82, 161, 61, 211, 7, 18, 189, 57, 112, 243, 61, 21, 212, 11, 190, 191, 117, 81, 190, 68, 31, 52, 62, 25, 47, 195, 190, 214, 30, 247, 187, 51, 229, 150, 62, 60, 228, 200, 189, 123, 206, 7, 61, 80, 151, 149, 188, 7, 47, 165, 188, 161, 232, 153, 61, 110, 197, 133, 62, 198, 47, 211, 62, 87, 225, 45, 62, 215, 43, 162, 190};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 2, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {38, 122, 128, 189, 239, 226, 83, 190};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_2 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 32, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::IDENTITY, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace model_definition {
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward; 
        using IF = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::sequential::Interface<CAPABILITY>;
        using MODEL = IF::Module<layer_0::TEMPLATE, IF::Module<layer_1::TEMPLATE, IF::Module<layer_2::TEMPLATE>>>;
    }
    using MODEL = model_definition::MODEL;
    const MODEL model = {layer_0::layer, {layer_1::layer, {layer_2::layer, {}}}};
}
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::input {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {176, 151, 15, 63, 178, 186, 199, 191, 162, 93, 94, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {98, 39, 55, 64, 189, 5, 20, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0069/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}