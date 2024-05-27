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
                alignas(float) const unsigned char memory[] = {132, 23, 0, 191, 158, 249, 148, 62, 23, 185, 199, 190, 247, 247, 85, 62, 237, 166, 39, 63, 45, 23, 15, 191, 42, 14, 12, 63, 180, 170, 22, 63, 49, 249, 0, 191, 95, 103, 74, 191, 31, 166, 61, 63, 213, 165, 106, 62, 145, 151, 228, 62, 228, 222, 209, 188, 146, 128, 182, 190, 251, 174, 151, 190, 93, 214, 104, 63, 233, 212, 4, 61, 92, 227, 169, 62, 135, 139, 83, 63, 202, 245, 15, 62, 124, 88, 54, 60, 164, 120, 87, 191, 181, 188, 188, 189, 223, 213, 182, 62, 247, 154, 131, 62, 51, 88, 222, 190, 159, 119, 107, 63, 15, 159, 14, 191, 208, 75, 240, 61, 192, 69, 31, 63, 94, 180, 116, 63, 89, 13, 164, 62, 146, 47, 109, 190, 87, 112, 35, 190, 151, 63, 208, 62, 49, 230, 180, 190, 111, 253, 81, 62, 230, 171, 168, 61, 153, 181, 48, 191, 68, 11, 118, 191, 4, 40, 126, 189, 208, 159, 45, 63, 86, 99, 175, 62, 212, 15, 57, 62, 247, 49, 30, 191, 170, 152, 117, 191, 212, 209, 145, 62, 13, 16, 227, 62, 244, 255, 185, 62, 39, 229, 67, 62, 55, 89, 86, 62, 225, 222, 53, 191, 57, 0, 9, 63, 156, 151, 182, 62, 97, 227, 144, 63, 94, 38, 190, 62, 255, 33, 147, 190, 240, 11, 223, 61, 10, 31, 42, 63, 153, 180, 138, 62, 26, 200, 143, 63, 21, 72, 193, 62, 34, 188, 60, 190, 24, 240, 169, 63, 88, 96, 0, 63, 194, 231, 148, 189, 164, 78, 69, 63, 241, 159, 204, 62, 196, 147, 176, 62, 25, 118, 205, 62, 21, 177, 150, 189, 209, 226, 143, 190, 62, 145, 157, 63, 182, 9, 138, 62, 169, 48, 68, 191, 119, 43, 83, 61, 32, 216, 74, 191, 169, 27, 205, 61, 224, 123, 166, 191, 44, 171, 219, 190, 194, 232, 53, 63, 232, 92, 156, 191, 65, 147, 159, 190, 100, 197, 83, 190, 194, 136, 72, 62, 238, 182, 45, 191, 65, 170, 206, 190, 85, 96, 157, 191, 1, 42, 139, 190, 114, 56, 80, 191, 48, 250, 77, 190, 69, 231, 54, 62, 53, 63, 221, 189, 212, 207, 53, 62, 248, 240, 30, 63};
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
                alignas(float) const unsigned char memory[] = {34, 108, 45, 191, 185, 215, 123, 191, 10, 30, 59, 190, 203, 87, 82, 62, 157, 190, 222, 190, 46, 149, 2, 63, 147, 4, 174, 188, 224, 207, 183, 62, 151, 11, 167, 190, 195, 165, 72, 61, 8, 143, 60, 61, 119, 104, 82, 190, 204, 22, 36, 63, 0, 186, 159, 62, 113, 155, 33, 191, 27, 171, 121, 190, 48, 92, 31, 191, 77, 64, 2, 62, 15, 191, 161, 190, 228, 148, 181, 190, 31, 247, 121, 189, 241, 74, 144, 62, 201, 118, 10, 63, 247, 203, 250, 62, 43, 29, 198, 189, 96, 195, 1, 190, 57, 233, 177, 61, 242, 130, 105, 190, 73, 66, 0, 190, 76, 68, 44, 63, 215, 159, 53, 190, 213, 30, 76, 190};
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
                alignas(float) const unsigned char memory[] = {118, 16, 132, 61, 212, 145, 251, 62, 75, 246, 155, 62, 174, 210, 58, 62, 203, 23, 188, 61, 218, 110, 1, 63, 10, 181, 230, 190, 99, 194, 81, 61, 109, 149, 91, 62, 49, 183, 188, 62, 131, 174, 51, 190, 50, 181, 2, 61, 124, 12, 51, 189, 162, 151, 194, 190, 86, 237, 131, 191, 69, 18, 13, 188, 126, 214, 142, 191, 182, 42, 105, 62, 178, 234, 200, 190, 39, 137, 41, 62, 166, 194, 167, 190, 35, 213, 67, 62, 177, 20, 17, 62, 30, 198, 255, 62, 83, 96, 129, 62, 38, 157, 152, 60, 32, 230, 175, 190, 12, 6, 139, 62, 29, 227, 74, 189, 228, 44, 122, 190, 9, 205, 71, 62, 180, 166, 129, 61, 149, 193, 39, 190, 215, 63, 67, 62, 12, 35, 170, 62, 139, 227, 146, 189, 122, 150, 160, 189, 96, 149, 151, 62, 81, 139, 120, 62, 84, 228, 234, 189, 37, 214, 167, 60, 18, 19, 41, 190, 232, 176, 98, 62, 242, 228, 19, 190, 3, 237, 0, 62, 84, 156, 137, 62, 104, 98, 237, 190, 70, 231, 73, 190, 231, 172, 13, 191, 51, 112, 27, 190, 159, 235, 31, 191, 71, 172, 144, 190, 71, 185, 94, 190, 235, 21, 122, 190, 33, 0, 49, 190, 99, 26, 170, 61, 97, 12, 119, 191, 209, 87, 14, 189, 186, 152, 34, 190, 199, 121, 118, 191, 230, 176, 227, 189, 233, 212, 138, 190, 217, 5, 8, 190, 149, 195, 47, 190, 135, 5, 51, 61, 113, 100, 249, 62, 167, 60, 37, 62, 250, 232, 219, 189, 128, 170, 220, 189, 95, 100, 156, 62, 242, 152, 191, 62, 25, 131, 191, 190, 134, 37, 166, 61, 242, 167, 142, 188, 47, 113, 194, 62, 18, 72, 97, 188, 38, 30, 133, 62, 102, 235, 222, 190, 49, 214, 17, 63, 146, 138, 52, 61, 188, 192, 238, 62, 220, 6, 72, 61, 207, 81, 117, 189, 207, 38, 13, 62, 107, 11, 221, 61, 234, 110, 18, 62, 219, 6, 87, 62, 248, 40, 168, 62, 85, 60, 25, 190, 67, 96, 38, 61, 222, 37, 109, 190, 209, 153, 49, 191, 227, 62, 160, 190, 83, 29, 114, 191, 194, 166, 127, 190, 53, 32, 188, 188, 173, 253, 84, 189, 243, 117, 199, 61, 147, 50, 72, 61, 32, 124, 237, 189, 54, 125, 124, 61, 124, 184, 68, 61, 248, 209, 24, 62, 217, 182, 135, 189, 105, 180, 134, 189, 65, 242, 83, 61, 128, 247, 193, 60, 7, 204, 15, 62, 133, 169, 95, 61, 99, 217, 184, 189, 108, 1, 46, 62, 82, 167, 48, 190, 60, 134, 66, 61, 16, 123, 15, 190, 16, 134, 27, 62, 136, 86, 108, 59, 82, 195, 26, 190, 218, 146, 225, 189, 209, 205, 47, 190, 130, 205, 38, 190, 155, 107, 29, 62, 216, 85, 42, 190, 212, 92, 162, 61, 91, 38, 245, 61, 157, 62, 168, 189, 247, 52, 254, 189, 18, 208, 163, 61, 23, 92, 248, 61, 121, 230, 41, 60, 121, 177, 55, 60, 49, 146, 70, 190, 250, 101, 236, 60, 138, 160, 237, 189, 159, 168, 218, 61, 140, 11, 228, 61, 226, 166, 170, 61, 172, 91, 24, 190, 12, 246, 195, 61, 222, 178, 159, 62, 111, 205, 154, 189, 154, 41, 90, 62, 112, 40, 138, 62, 184, 125, 4, 190, 125, 207, 72, 190, 154, 156, 244, 189, 206, 165, 200, 189, 142, 74, 177, 189, 140, 22, 45, 190, 96, 177, 231, 61, 202, 190, 191, 61, 112, 69, 58, 62, 118, 191, 69, 62, 124, 123, 111, 61, 82, 146, 177, 61, 149, 116, 55, 62, 77, 4, 212, 189, 28, 125, 117, 62, 149, 190, 52, 61, 95, 15, 77, 61, 253, 230, 114, 189, 61, 170, 45, 188, 101, 191, 161, 189, 238, 45, 186, 60, 78, 220, 182, 189, 209, 161, 16, 190, 46, 177, 229, 189, 152, 217, 1, 190, 156, 156, 167, 60, 200, 218, 170, 188, 35, 220, 182, 189, 35, 156, 7, 188, 115, 107, 30, 190, 159, 20, 81, 190, 49, 33, 64, 61, 4, 81, 54, 189, 195, 108, 159, 189, 20, 190, 159, 189, 95, 239, 2, 188, 251, 67, 116, 189, 230, 187, 70, 189, 36, 167, 217, 188, 66, 92, 18, 188, 30, 201, 177, 61, 76, 217, 74, 190, 190, 151, 47, 190, 191, 109, 152, 189, 158, 96, 55, 189, 88, 20, 245, 188, 84, 191, 201, 61, 113, 192, 25, 188, 229, 123, 190, 189, 204, 207, 55, 61, 194, 162, 20, 62, 4, 249, 197, 190, 239, 30, 252, 187, 39, 80, 13, 191, 242, 170, 179, 61, 91, 197, 85, 189, 44, 147, 236, 62, 2, 62, 11, 62, 77, 188, 164, 190, 225, 71, 22, 190, 71, 168, 130, 62, 59, 122, 58, 62, 9, 237, 211, 61, 43, 239, 70, 62, 174, 211, 219, 62, 96, 195, 126, 62, 131, 100, 75, 62, 26, 82, 226, 60, 92, 186, 74, 189, 133, 207, 122, 189, 204, 60, 77, 188, 4, 239, 54, 189, 86, 226, 213, 189, 86, 71, 245, 61, 103, 146, 90, 191, 147, 82, 164, 62, 50, 147, 133, 61, 100, 15, 68, 191, 11, 161, 206, 61, 254, 118, 70, 61, 239, 204, 66, 190, 44, 167, 235, 188, 96, 53, 31, 191, 175, 92, 13, 189, 88, 173, 107, 190, 61, 87, 206, 62, 75, 7, 22, 62, 205, 2, 164, 62, 188, 80, 138, 189, 250, 21, 219, 189, 119, 137, 86, 190, 40, 191, 137, 189, 22, 254, 157, 190, 87, 140, 190, 190, 44, 99, 86, 62, 41, 221, 51, 189, 15, 223, 215, 189, 223, 97, 67, 187, 219, 91, 68, 190, 117, 41, 188, 190, 137, 217, 135, 190, 245, 178, 194, 190, 200, 212, 150, 189, 149, 72, 107, 189, 49, 95, 150, 188, 2, 16, 5, 62, 79, 194, 58, 62, 179, 165, 63, 190, 12, 216, 233, 61, 213, 186, 20, 62, 104, 20, 233, 190, 136, 160, 13, 190, 215, 159, 146, 61, 8, 97, 191, 190, 235, 158, 128, 189, 37, 86, 214, 189, 65, 32, 20, 190, 41, 234, 24, 190, 245, 16, 130, 61, 241, 19, 31, 190, 89, 39, 188, 189, 109, 209, 19, 62, 79, 177, 233, 61, 188, 224, 226, 61, 19, 136, 13, 62, 137, 163, 117, 188, 85, 208, 71, 189, 97, 153, 12, 61, 136, 223, 105, 190, 160, 112, 72, 61, 107, 50, 39, 190, 148, 103, 136, 61, 26, 182, 147, 189, 48, 146, 94, 189, 193, 19, 45, 190, 92, 84, 100, 61, 151, 128, 140, 188, 221, 44, 223, 189, 95, 42, 3, 62, 190, 240, 217, 61, 41, 152, 58, 189, 158, 230, 10, 190, 90, 109, 167, 60, 248, 106, 78, 189, 122, 32, 226, 189, 196, 203, 168, 61, 144, 161, 200, 61, 212, 12, 142, 60, 217, 57, 62, 190, 19, 157, 141, 61, 41, 25, 16, 190, 85, 153, 97, 189, 21, 145, 7, 189, 112, 59, 227, 189, 184, 173, 182, 187, 148, 158, 22, 190, 141, 171, 62, 190, 73, 190, 234, 61, 77, 171, 179, 189, 54, 181, 147, 189, 1, 67, 92, 61, 34, 127, 2, 62, 103, 18, 33, 190, 210, 188, 187, 189, 32, 44, 19, 190, 101, 156, 179, 60, 128, 43, 189, 189, 59, 46, 185, 60, 255, 191, 132, 61, 25, 58, 74, 190, 155, 39, 62, 187, 46, 224, 3, 62, 47, 20, 198, 189, 202, 252, 42, 190, 94, 218, 189, 189, 179, 59, 33, 62, 127, 190, 151, 189, 82, 66, 58, 190, 230, 149, 10, 188, 249, 11, 112, 189, 74, 25, 89, 62, 28, 76, 6, 190, 193, 128, 212, 189, 235, 21, 193, 60, 157, 180, 173, 61, 78, 43, 8, 189, 183, 209, 83, 61, 105, 20, 156, 62, 221, 14, 211, 62, 27, 166, 173, 187, 4, 11, 102, 62, 106, 48, 212, 190, 22, 78, 140, 62, 231, 255, 194, 189, 170, 151, 99, 62, 88, 216, 175, 61, 47, 238, 34, 189, 220, 175, 19, 58, 40, 93, 100, 62, 181, 130, 151, 61, 193, 117, 8, 61, 137, 93, 223, 62, 21, 252, 78, 59, 46, 139, 241, 59, 228, 211, 243, 189, 162, 140, 176, 190, 189, 184, 47, 189, 128, 236, 13, 191, 161, 84, 132, 190, 204, 72, 134, 62, 210, 175, 47, 62, 252, 172, 232, 190, 119, 17, 137, 189, 193, 66, 237, 190, 17, 160, 59, 190, 27, 154, 2, 62, 176, 60, 16, 63, 88, 17, 50, 62, 157, 166, 196, 190, 1, 97, 218, 189, 81, 101, 216, 62, 1, 5, 103, 61, 145, 249, 3, 61, 234, 5, 192, 61, 202, 177, 236, 62, 50, 248, 181, 62, 48, 178, 54, 63, 115, 56, 28, 190, 179, 187, 128, 62, 111, 143, 164, 188, 9, 233, 141, 61, 207, 127, 41, 190, 49, 13, 61, 189, 248, 50, 47, 62, 53, 21, 171, 190, 246, 88, 160, 62, 23, 117, 8, 62, 77, 89, 97, 191, 90, 56, 23, 62, 148, 102, 20, 189, 193, 22, 31, 190, 229, 92, 96, 190, 228, 74, 26, 62, 215, 219, 235, 189, 44, 4, 63, 190, 201, 87, 231, 190, 9, 21, 153, 190, 197, 220, 53, 62, 207, 231, 179, 62, 116, 147, 133, 61, 246, 21, 174, 190, 22, 216, 113, 62, 232, 228, 167, 62, 105, 174, 236, 189, 18, 145, 131, 62, 142, 170, 135, 62, 156, 148, 156, 62, 209, 214, 231, 62, 232, 155, 205, 61, 16, 103, 181, 190, 175, 30, 171, 62, 170, 211, 78, 191, 38, 231, 137, 61, 115, 250, 58, 191, 10, 233, 104, 190, 253, 211, 244, 61, 110, 131, 141, 191, 151, 160, 98, 62, 159, 102, 250, 189, 79, 10, 78, 191, 199, 31, 127, 62, 22, 55, 43, 62, 205, 135, 164, 61, 39, 181, 189, 190, 113, 235, 112, 62, 216, 28, 39, 62, 229, 189, 54, 190, 50, 179, 16, 191, 17, 231, 112, 189, 51, 33, 14, 61, 144, 45, 35, 190, 175, 81, 74, 61, 239, 251, 150, 61, 149, 211, 40, 191, 146, 31, 90, 62, 215, 219, 28, 187, 209, 58, 63, 190, 164, 204, 228, 60, 176, 107, 93, 189, 168, 83, 19, 63, 59, 238, 44, 190, 139, 179, 182, 59, 119, 74, 180, 188, 181, 139, 23, 190, 160, 29, 20, 59, 15, 218, 117, 191, 245, 109, 211, 190, 215, 61, 104, 190, 62, 206, 29, 191, 178, 12, 153, 61, 23, 41, 17, 62, 29, 36, 5, 61, 32, 61, 188, 188, 4, 116, 61, 62, 140, 36, 38, 63, 134, 11, 126, 190, 190, 59, 95, 190, 50, 238, 205, 186, 122, 228, 97, 62, 6, 235, 117, 189, 82, 43, 218, 61, 159, 233, 113, 60, 51, 215, 206, 190, 70, 30, 178, 61, 80, 130, 203, 61, 71, 56, 23, 63, 72, 149, 5, 190, 244, 207, 99, 189, 166, 108, 188, 61, 67, 121, 142, 60, 125, 212, 54, 191, 39, 56, 2, 190, 12, 255, 78, 191, 52, 130, 68, 62, 32, 20, 7, 191, 214, 154, 123, 61, 54, 104, 151, 190, 189, 36, 210, 188, 77, 133, 165, 189, 82, 4, 224, 61, 64, 195, 203, 189, 186, 118, 80, 190, 241, 184, 75, 190, 233, 45, 185, 189, 27, 167, 126, 190, 4, 242, 229, 189, 33, 12, 127, 61, 36, 190, 222, 61, 54, 67, 196, 61, 147, 5, 23, 61, 32, 23, 188, 189, 149, 130, 195, 189, 49, 13, 163, 190, 7, 151, 104, 190, 154, 163, 215, 61, 154, 10, 191, 61, 210, 96, 219, 189, 220, 181, 98, 191, 126, 118, 125, 189, 197, 182, 98, 189, 211, 155, 15, 62, 165, 5, 170, 62, 247, 58, 58, 189, 196, 75, 88, 61, 138, 107, 52, 62, 215, 125, 123, 190, 10, 173, 29, 190, 128, 47, 227, 190, 120, 130, 132, 61, 61, 226, 190, 190, 114, 79, 56, 190, 16, 114, 51, 190, 201, 121, 242, 190, 138, 48, 247, 61, 71, 162, 14, 62, 4, 220, 250, 189, 187, 231, 66, 61, 128, 10, 42, 62, 5, 136, 63, 61, 161, 200, 14, 190, 94, 109, 169, 190, 221, 173, 171, 62, 36, 91, 155, 61, 33, 103, 198, 61, 174, 76, 136, 62, 146, 59, 54, 62, 171, 35, 211, 190, 72, 130, 230, 189, 57, 170, 214, 62, 173, 231, 183, 62, 63, 43, 102, 190, 216, 140, 222, 189, 118, 19, 24, 60, 209, 127, 199, 190, 65, 158, 18, 191, 156, 135, 225, 61, 231, 230, 95, 191, 117, 223, 125, 62, 33, 64, 187, 189, 216, 54, 72, 62, 106, 138, 162, 190, 80, 212, 233, 189, 108, 110, 21, 62, 7, 22, 28, 62, 128, 33, 74, 61, 114, 183, 54, 190, 192, 183, 88, 186, 138, 244, 225, 62, 229, 134, 70, 190, 50, 145, 73, 61, 101, 200, 21, 61, 139, 148, 50, 62, 0, 146, 83, 62, 100, 107, 35, 189, 89, 33, 207, 61, 224, 68, 70, 62, 173, 144, 168, 190, 46, 166, 160, 62, 82, 118, 250, 190, 201, 102, 37, 190, 197, 91, 134, 189, 36, 126, 97, 62, 246, 65, 157, 188, 232, 36, 23, 189, 143, 185, 7, 62, 235, 60, 147, 189, 247, 190, 42, 191, 70, 154, 105, 190, 83, 153, 17, 191, 120, 201, 47, 190, 54, 107, 19, 190, 7, 220, 134, 62, 3, 143, 138, 190, 24, 232, 95, 61, 228, 20, 43, 62, 127, 209, 61, 190, 197, 33, 8, 62, 63, 215, 3, 62, 48, 165, 252, 191, 223, 88, 250, 190, 113, 68, 77, 62, 246, 159, 29, 62, 46, 244, 84, 62, 130, 128, 87, 62, 51, 42, 112, 61, 56, 229, 127, 190, 133, 32, 50, 190, 79, 28, 175, 189, 95, 71, 170, 189, 239, 144, 112, 62, 239, 47, 11, 62, 242, 145, 17, 189, 23, 4, 126, 190, 46, 178, 100, 189, 126, 7, 31, 62, 71, 33, 121, 189, 221, 129, 128, 62, 116, 68, 156, 60, 63, 22, 232, 61, 187, 53, 84, 189, 45, 171, 190, 188, 248, 85, 16, 190, 14, 89, 63, 190, 199, 119, 120, 190, 185, 202, 155, 62, 17, 6, 98, 187, 245, 125, 209, 189, 43, 106, 182, 62, 49, 23, 8, 190, 240, 90, 147, 62, 176, 60, 202, 60, 89, 48, 44, 191, 11, 63, 67, 61, 46, 252, 248, 189, 240, 127, 213, 190, 57, 5, 13, 190, 195, 208, 139, 189, 38, 1, 102, 60, 78, 211, 145, 61, 220, 10, 145, 188, 1, 146, 78, 190, 31, 19, 179, 60, 255, 192, 197, 188, 111, 58, 255, 189, 249, 252, 172, 189, 72, 157, 120, 189, 64, 248, 61, 189, 187, 158, 16, 62, 106, 148, 9, 62, 50, 26, 81, 188, 150, 200, 15, 189, 104, 114, 180, 188, 10, 56, 29, 190, 183, 139, 84, 187, 152, 143, 36, 190, 143, 175, 105, 189, 129, 247, 165, 60, 18, 152, 236, 188, 248, 181, 145, 61, 105, 14, 187, 61, 161, 23, 66, 190, 102, 131, 212, 61, 7, 90, 59, 189, 241, 138, 211, 189, 191, 206, 71, 190, 218, 99, 112, 60, 152, 162, 136, 61, 205, 37, 198, 189, 153, 176, 202, 61, 122, 79, 159, 190, 254, 168, 82, 189, 151, 246, 6, 189, 220, 83, 132, 59, 27, 162, 175, 188, 59, 171, 233, 62, 127, 207, 166, 61, 169, 227, 6, 190, 150, 71, 233, 59, 152, 48, 184, 62, 253, 74, 189, 61, 33, 210, 169, 61, 130, 158, 111, 189, 141, 108, 119, 61, 23, 68, 149, 61, 123, 45, 242, 61, 250, 244, 240, 189, 112, 37, 3, 190, 164, 124, 22, 61, 76, 45, 29, 61, 134, 245, 109, 190, 222, 25, 47, 62, 54, 37, 34, 62, 157, 65, 115, 190, 85, 32, 127, 62, 62, 136, 180, 185, 162, 53, 65, 191, 162, 2, 189, 61, 53, 209, 255, 189, 175, 195, 140, 190, 157, 164, 235, 189, 135, 162, 23, 190, 224, 107, 198, 187, 130, 116, 251, 61, 102, 23, 57, 189, 53, 32, 143, 62, 254, 253, 38, 191, 104, 31, 216, 190, 95, 121, 234, 61, 108, 132, 157, 59, 14, 26, 191, 61, 84, 173, 69, 191, 68, 97, 25, 62, 87, 38, 174, 190, 48, 95, 143, 189, 242, 248, 194, 189, 151, 19, 150, 62, 225, 44, 136, 62, 149, 185, 154, 188, 208, 82, 216, 61, 87, 183, 144, 60, 120, 91, 181, 61, 35, 184, 60, 190, 188, 202, 63, 190, 68, 140, 32, 190, 156, 140, 8, 190, 25, 38, 24, 189, 63, 138, 182, 62, 22, 226, 248, 62, 252, 183, 206, 189, 123, 16, 35, 62, 206, 80, 147, 62, 144, 43, 112, 190, 21, 199, 67, 62, 45, 110, 84, 189, 223, 47, 158, 190, 75, 59, 199, 190, 130, 178, 141, 60, 141, 96, 19, 62, 46, 211, 21, 63, 254, 33, 188, 61, 212, 230, 177, 190, 74, 23, 29, 190, 212, 19, 193, 62, 32, 111, 44, 62, 138, 199, 179, 61, 49, 39, 207, 62, 2, 253, 125, 61, 161, 206, 39, 63, 76, 9, 242, 189, 112, 15, 220, 190, 135, 191, 49, 62, 48, 84, 18, 191, 216, 90, 167, 62, 78, 238, 23, 191, 245, 89, 231, 190, 161, 145, 1, 62, 19, 226, 248, 190, 207, 9, 147, 62, 35, 184, 241, 189, 191, 121, 58, 191, 123, 183, 200, 61, 63, 25, 13, 62, 160, 7, 211, 61, 199, 42, 140, 190, 37, 11, 191, 190, 53, 9, 152, 189, 232, 145, 191, 190, 11, 127, 33, 61, 76, 102, 38, 190, 163, 38, 97, 62, 134, 190, 33, 60, 14, 27, 137, 190, 201, 188, 182, 189, 188, 45, 53, 191, 106, 84, 187, 189, 242, 35, 7, 191, 197, 239, 31, 189, 29, 148, 8, 62, 28, 106, 67, 190, 18, 195, 136, 62, 37, 254, 27, 190, 147, 190, 206, 190, 59, 170, 17, 62, 98, 94, 46, 191, 190, 223, 103, 188, 82, 89, 247, 190, 64, 175, 77, 190, 177, 157, 204, 190, 56, 165, 140, 190, 54, 91, 181, 189, 28, 90, 235, 190, 157, 235, 14, 191, 159, 25, 32, 191, 82, 40, 179, 61, 140, 3, 154, 62, 92, 52, 188, 190, 157, 44, 13, 61, 146, 1, 38, 60, 68, 13, 50, 62, 73, 51, 112, 62, 23, 242, 132, 189, 108, 17, 241, 62, 171, 36, 175, 187, 86, 88, 210, 190, 90, 40, 29, 62, 243, 127, 142, 190, 138, 96, 119, 189, 250, 210, 86, 190, 93, 31, 160, 62, 83, 146, 254, 189, 167, 121, 20, 191, 19, 191, 11, 190, 103, 181, 76, 191, 164, 187, 4, 191, 233, 25, 131, 190, 205, 149, 215, 190, 0, 193, 137, 190, 173, 137, 182, 60, 67, 97, 15, 190, 200, 109, 140, 61, 28, 46, 137, 189, 83, 147, 12, 190, 57, 43, 8, 191, 234, 243, 87, 191, 110, 159, 31, 62, 108, 174, 143, 190, 178, 249, 160, 61, 49, 117, 3, 190, 57, 39, 215, 190, 245, 191, 223, 61, 207, 248, 182, 62, 55, 97, 66, 62, 130, 46, 40, 62, 93, 9, 172, 61, 104, 217, 51, 191, 197, 31, 115, 61, 171, 21, 115, 62, 187, 166, 1, 63, 138, 178, 214, 190, 158, 216, 231, 61, 48, 28, 228, 60, 254, 147, 162, 190, 23, 79, 77, 191, 179, 76, 124, 190, 43, 151, 38, 191, 99, 43, 9, 62, 240, 105, 219, 190, 54, 222, 48, 62, 210, 199, 178, 190, 119, 176, 177, 61, 100, 157, 218, 61, 173, 188, 184, 62, 118, 224, 37, 189, 81, 80, 1, 189, 28, 10, 141, 61, 56, 56, 198, 62, 207, 155, 101, 190, 124, 177, 106, 190, 252, 131, 243, 61, 182, 249, 130, 61, 134, 42, 210, 62, 253, 135, 185, 62, 130, 48, 47, 61, 176, 199, 132, 189, 76, 205, 19, 190, 196, 209, 174, 61, 30, 154, 146, 62, 28, 253, 11, 191, 206, 66, 170, 189, 31, 147, 245, 187, 250, 146, 109, 62, 182, 57, 43, 190, 222, 18, 76, 190, 214, 132, 166, 189, 59, 213, 198, 62, 41, 203, 248, 61, 103, 248, 12, 188, 106, 129, 233, 60, 222, 110, 199, 61, 177, 137, 49, 190, 201, 30, 148, 62, 41, 48, 11, 189, 29, 0, 88, 61, 99, 243, 131, 62, 169, 147, 133, 61, 57, 223, 60, 61, 231, 80, 35, 191, 63, 83, 0, 191, 149, 28, 120, 190, 189, 237, 98, 191, 19, 45, 196, 62, 155, 218, 5, 62, 218, 213, 138, 190, 251, 235, 10, 62, 131, 78, 249, 62, 1, 28, 5, 61, 44, 115, 199, 62, 64, 5, 22, 190, 26, 146, 234, 190, 207, 66, 96, 61, 76, 64, 115, 62, 122, 194, 188, 62, 129, 148, 139, 190, 166, 236, 29, 62, 70, 156, 20, 59, 55, 13, 80, 190, 137, 219, 204, 190, 142, 21, 42, 62, 160, 144, 93, 191, 2, 184, 151, 62, 6, 70, 11, 191, 27, 86, 178, 189, 98, 190, 179, 190, 77, 31, 61, 61, 162, 72, 253, 61, 37, 170, 142, 62, 26, 246, 42, 60, 124, 148, 226, 189, 243, 7, 159, 188, 107, 27, 178, 62, 132, 240, 162, 190, 255, 210, 227, 189, 223, 12, 151, 62, 30, 130, 85, 61, 124, 172, 18, 190, 249, 191, 185, 189, 101, 35, 75, 188, 99, 89, 166, 61, 42, 83, 237, 61, 56, 123, 225, 189, 218, 77, 2, 61, 169, 6, 113, 61, 224, 58, 8, 190, 49, 123, 156, 191, 10, 22, 32, 190, 16, 28, 157, 190, 112, 80, 62, 189, 210, 96, 21, 62, 101, 202, 102, 189, 220, 151, 202, 62, 58, 190, 33, 188, 160, 79, 206, 190, 43, 138, 39, 62, 89, 237, 73, 191, 42, 99, 199, 189, 240, 62, 222, 190, 226, 156, 7, 59, 25, 19, 237, 190, 238, 80, 215, 190, 97, 77, 219, 188, 132, 151, 226, 60, 64, 178, 202, 61, 173, 143, 56, 189, 12, 231, 20, 62, 27, 38, 173, 61, 201, 250, 163, 190, 97, 195, 202, 190, 99, 78, 136, 61, 111, 16, 143, 62, 80, 154, 143, 61, 142, 159, 187, 59, 32, 38, 1, 188, 163, 247, 176, 190, 46, 160, 76, 62, 69, 86, 210, 61, 166, 188, 22, 63, 197, 16, 31, 190, 245, 68, 107, 190, 109, 60, 227, 188, 58, 106, 67, 61, 84, 49, 145, 190, 12, 130, 235, 190, 32, 172, 47, 191, 141, 64, 144, 62, 141, 90, 27, 191, 23, 210, 231, 61, 144, 219, 40, 191, 41, 134, 172, 189, 27, 204, 58, 62, 214, 253, 34, 189, 148, 181, 227, 189, 14, 137, 230, 190, 197, 177, 52, 190, 61, 195, 17, 63, 195, 229, 149, 190, 168, 35, 138, 62, 100, 190, 234, 189, 255, 137, 216, 61, 62, 121, 24, 62, 237, 78, 138, 190, 255, 89, 214, 190, 46, 26, 157, 62, 73, 196, 61, 191, 197, 142, 160, 62, 240, 118, 10, 62, 174, 218, 74, 62, 199, 112, 160, 190, 245, 175, 1, 190, 93, 131, 221, 189, 244, 230, 112, 61, 182, 224, 10, 62, 141, 225, 98, 62, 18, 143, 81, 190, 30, 103, 250, 190, 242, 0, 168, 189, 244, 222, 77, 190, 103, 52, 53, 187, 223, 81, 167, 188, 71, 58, 65, 190, 187, 14, 118, 62, 162, 141, 37, 62, 240, 235, 153, 61, 145, 51, 213, 62, 163, 114, 71, 62, 22, 118, 56, 190, 160, 246, 81, 191, 120, 43, 169, 62, 151, 229, 163, 62, 46, 36, 18, 62, 118, 97, 159, 189, 112, 242, 26, 62, 177, 133, 229, 189, 156, 165, 181, 189, 165, 42, 139, 190, 0, 151, 234, 189, 182, 38, 189, 62, 223, 253, 240, 61, 52, 211, 217, 190, 3, 42, 11, 190, 146, 238, 142, 190, 167, 91, 230, 61, 44, 127, 149, 189, 26, 161, 144, 62, 113, 149, 90, 60, 198, 110, 29, 63, 58, 222, 125, 190, 143, 26, 131, 62, 220, 24, 85, 62, 144, 217, 37, 62, 202, 193, 245, 190, 63, 255, 44, 62, 190, 232, 32, 190, 28, 141, 193, 188, 50, 34, 167, 62, 6, 165, 175, 61, 176, 23, 34, 62, 43, 16, 127, 190, 137, 44, 168, 191, 182, 129, 63, 62, 139, 172, 214, 190, 60, 219, 232, 190, 41, 175, 49, 190};
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
                alignas(float) const unsigned char memory[] = {4, 178, 184, 61, 226, 87, 206, 61, 241, 184, 75, 62, 51, 233, 165, 189, 92, 70, 237, 62, 184, 41, 203, 61, 72, 128, 190, 61, 27, 50, 139, 61, 132, 11, 44, 190, 236, 158, 236, 189, 224, 224, 115, 62, 213, 73, 74, 62, 69, 147, 157, 62, 239, 0, 16, 190, 39, 208, 163, 62, 38, 114, 21, 190, 139, 164, 174, 189, 38, 202, 14, 190, 148, 247, 156, 62, 154, 194, 80, 190, 154, 127, 106, 62, 77, 109, 85, 190, 81, 143, 117, 61, 14, 252, 34, 62, 78, 109, 133, 61, 149, 58, 161, 61, 54, 206, 101, 61, 238, 171, 201, 189, 241, 35, 244, 189, 0, 37, 30, 62, 199, 142, 100, 62, 31, 6, 134, 61};
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
                alignas(float) const unsigned char memory[] = {145, 226, 198, 62, 170, 197, 23, 191, 192, 89, 2, 191, 222, 205, 162, 61, 253, 90, 228, 60, 137, 62, 150, 189, 53, 141, 168, 190, 30, 221, 51, 191, 225, 186, 158, 60, 176, 101, 218, 189, 169, 20, 147, 189, 242, 237, 6, 191, 128, 215, 79, 191, 225, 122, 59, 62, 18, 155, 51, 62, 171, 69, 130, 190, 100, 189, 157, 62, 131, 163, 92, 63, 102, 67, 196, 190, 162, 80, 94, 61, 248, 155, 100, 190, 60, 174, 34, 191, 52, 190, 51, 191, 248, 61, 133, 191, 177, 211, 36, 191, 16, 74, 166, 62, 124, 85, 77, 62, 34, 224, 189, 62, 166, 117, 25, 191, 111, 105, 72, 63, 57, 110, 61, 63, 17, 148, 68, 191, 34, 14, 23, 190, 124, 232, 242, 190, 55, 68, 113, 189, 40, 251, 2, 190, 115, 109, 141, 190, 160, 62, 104, 61, 250, 176, 191, 61, 25, 198, 186, 189, 57, 15, 150, 61, 237, 158, 148, 61, 62, 97, 165, 190, 187, 144, 72, 62, 182, 19, 251, 189, 199, 198, 148, 189, 92, 69, 170, 190, 197, 108, 21, 60, 97, 200, 96, 188, 74, 108, 168, 62, 105, 251, 130, 190, 227, 0, 141, 60, 190, 41, 134, 190, 48, 18, 26, 62, 207, 85, 160, 62, 31, 235, 70, 62, 80, 70, 191, 61, 0, 128, 227, 189, 143, 213, 6, 63, 112, 3, 62, 61, 103, 233, 187, 189, 18, 67, 139, 61, 228, 230, 216, 60, 178, 32, 239, 62};
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
                alignas(float) const unsigned char memory[] = {120, 39, 86, 61, 143, 105, 152, 190};
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
    alignas(float) const unsigned char memory[] = {247, 95, 197, 191, 222, 38, 4, 63, 194, 38, 189, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {29, 211, 61, 64, 137, 239, 254, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0061/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}