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
                alignas(float) const unsigned char memory[] = {113, 179, 229, 62, 51, 104, 12, 191, 197, 20, 214, 62, 243, 67, 34, 191, 209, 146, 160, 60, 150, 213, 19, 190, 171, 42, 2, 191, 144, 203, 216, 63, 213, 101, 195, 62, 174, 185, 53, 62, 30, 124, 114, 63, 56, 27, 225, 62, 48, 130, 54, 191, 13, 234, 122, 191, 165, 218, 26, 191, 35, 200, 132, 62, 112, 27, 129, 63, 104, 174, 192, 62, 52, 223, 39, 63, 154, 17, 240, 62, 240, 175, 49, 62, 246, 222, 131, 190, 149, 243, 215, 61, 0, 144, 177, 190, 140, 40, 28, 63, 120, 54, 46, 191, 255, 193, 148, 62, 113, 36, 29, 190, 174, 0, 169, 61, 164, 105, 242, 190, 219, 161, 169, 61, 69, 134, 237, 62, 234, 45, 209, 190, 76, 237, 9, 189, 237, 79, 157, 191, 65, 171, 252, 189, 109, 121, 84, 63, 61, 255, 243, 190, 135, 233, 162, 190, 183, 61, 208, 190, 118, 26, 0, 191, 217, 91, 145, 62, 104, 118, 232, 190, 95, 21, 62, 63, 90, 57, 131, 62, 28, 45, 8, 63, 69, 165, 130, 63, 121, 51, 74, 62, 186, 192, 58, 190, 134, 245, 99, 63, 124, 86, 104, 190, 189, 0, 140, 190, 115, 141, 102, 63, 1, 63, 25, 63, 220, 61, 83, 63, 241, 215, 113, 63, 190, 77, 234, 62, 221, 93, 137, 62, 123, 131, 160, 189, 95, 169, 2, 61, 169, 69, 88, 63, 254, 240, 123, 191, 138, 194, 80, 190, 241, 124, 107, 190, 31, 97, 81, 191, 22, 168, 0, 63, 138, 161, 35, 191, 115, 39, 175, 61, 0, 37, 233, 61, 192, 229, 223, 62, 198, 28, 147, 63, 162, 17, 127, 62, 16, 248, 10, 63, 198, 14, 163, 191, 102, 26, 195, 190, 68, 238, 182, 190, 252, 219, 96, 62, 99, 69, 28, 63, 245, 232, 187, 61, 82, 244, 84, 191, 177, 211, 90, 62, 225, 179, 50, 62, 80, 125, 84, 191, 82, 218, 237, 190, 201, 201, 36, 189, 152, 161, 210, 190, 156, 70, 66, 62, 104, 232, 6, 191, 93, 253, 193, 63, 82, 234, 187, 62, 58, 124, 217, 190, 10, 133, 208, 191, 102, 73, 155, 190, 150, 119, 150, 62, 140, 234, 42, 191, 112, 27, 103, 62};
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
                alignas(float) const unsigned char memory[] = {20, 18, 199, 190, 131, 85, 111, 63, 29, 209, 115, 190, 148, 158, 0, 189, 6, 106, 40, 191, 140, 29, 205, 190, 22, 8, 218, 62, 35, 60, 220, 189, 166, 50, 143, 62, 34, 3, 129, 188, 28, 209, 113, 62, 243, 34, 37, 62, 185, 86, 56, 191, 202, 157, 52, 189, 185, 0, 162, 190, 168, 14, 87, 62, 71, 71, 212, 62, 80, 175, 139, 190, 135, 74, 97, 191, 79, 34, 244, 190, 237, 31, 32, 62, 161, 177, 193, 190, 111, 193, 9, 63, 129, 135, 115, 189, 23, 182, 104, 190, 26, 181, 38, 191, 44, 107, 201, 190, 176, 254, 199, 190, 75, 19, 190, 190, 231, 1, 103, 190, 65, 28, 193, 189, 226, 210, 106, 61};
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
                alignas(float) const unsigned char memory[] = {218, 193, 234, 61, 199, 111, 72, 190, 49, 55, 34, 62, 237, 121, 149, 190, 99, 72, 229, 190, 169, 8, 145, 62, 112, 132, 32, 62, 97, 74, 183, 189, 73, 245, 9, 188, 145, 184, 4, 190, 131, 132, 11, 189, 73, 173, 170, 61, 115, 16, 71, 62, 245, 40, 134, 190, 145, 178, 92, 189, 135, 142, 200, 189, 10, 241, 36, 191, 59, 177, 108, 190, 39, 10, 64, 62, 101, 196, 175, 61, 157, 55, 70, 62, 154, 101, 105, 61, 161, 37, 68, 190, 227, 216, 253, 189, 108, 84, 240, 62, 203, 154, 185, 188, 50, 89, 147, 188, 156, 132, 218, 61, 130, 61, 134, 189, 241, 103, 89, 60, 81, 167, 201, 190, 88, 165, 16, 62, 154, 48, 33, 190, 142, 74, 17, 190, 35, 54, 71, 190, 247, 111, 123, 190, 6, 76, 81, 191, 83, 45, 145, 190, 103, 241, 196, 190, 53, 154, 55, 190, 107, 60, 226, 59, 53, 88, 47, 190, 36, 49, 156, 190, 37, 87, 131, 61, 55, 17, 224, 189, 73, 32, 233, 61, 51, 104, 150, 189, 20, 94, 158, 190, 250, 94, 221, 190, 0, 221, 214, 61, 121, 46, 123, 190, 251, 111, 160, 61, 146, 50, 234, 189, 11, 127, 162, 61, 7, 142, 13, 61, 232, 83, 172, 190, 167, 1, 73, 60, 14, 220, 193, 61, 209, 144, 0, 62, 55, 176, 214, 61, 65, 67, 114, 190, 21, 49, 162, 189, 248, 129, 4, 60, 170, 253, 180, 189, 24, 84, 36, 62, 31, 104, 39, 190, 97, 47, 41, 59, 79, 113, 138, 60, 17, 78, 90, 189, 172, 103, 120, 189, 73, 164, 187, 187, 136, 12, 212, 61, 200, 67, 180, 189, 153, 26, 181, 61, 200, 140, 85, 189, 109, 19, 89, 190, 167, 13, 147, 61, 219, 191, 127, 56, 127, 124, 206, 189, 102, 23, 221, 60, 211, 240, 105, 190, 11, 47, 47, 61, 210, 130, 36, 62, 13, 80, 26, 190, 16, 227, 179, 61, 167, 200, 18, 190, 234, 246, 243, 188, 194, 54, 14, 190, 9, 82, 166, 189, 177, 59, 69, 189, 107, 171, 240, 61, 201, 170, 27, 62, 183, 59, 88, 62, 38, 108, 118, 61, 239, 195, 162, 189, 175, 120, 54, 190, 108, 176, 188, 62, 158, 144, 128, 62, 206, 0, 45, 62, 188, 228, 120, 190, 202, 181, 103, 189, 251, 120, 105, 191, 96, 186, 213, 62, 173, 226, 77, 62, 43, 77, 69, 62, 197, 85, 138, 62, 40, 211, 181, 62, 49, 3, 14, 190, 104, 132, 194, 60, 192, 150, 192, 190, 138, 233, 62, 191, 108, 42, 138, 190, 19, 115, 179, 62, 20, 226, 226, 190, 163, 27, 55, 191, 86, 69, 137, 189, 4, 183, 2, 62, 138, 82, 231, 61, 141, 162, 36, 61, 56, 195, 39, 191, 34, 223, 185, 189, 84, 58, 45, 187, 7, 204, 78, 62, 70, 79, 77, 190, 57, 82, 225, 61, 245, 237, 219, 60, 59, 165, 40, 191, 185, 128, 72, 62, 72, 218, 105, 190, 116, 69, 252, 189, 198, 20, 5, 190, 109, 64, 12, 189, 48, 230, 146, 190, 94, 129, 182, 190, 143, 157, 132, 189, 235, 110, 242, 190, 120, 73, 105, 62, 23, 49, 75, 191, 121, 64, 167, 189, 239, 182, 195, 190, 18, 226, 22, 191, 85, 124, 11, 188, 255, 180, 37, 190, 124, 143, 5, 61, 41, 66, 203, 61, 168, 251, 189, 61, 37, 220, 241, 190, 58, 200, 21, 62, 116, 169, 172, 62, 75, 215, 8, 62, 20, 71, 40, 62, 237, 95, 243, 189, 241, 238, 185, 190, 153, 42, 132, 189, 88, 16, 86, 62, 203, 84, 8, 191, 39, 140, 3, 62, 124, 64, 13, 189, 76, 109, 1, 191, 110, 88, 229, 61, 236, 188, 0, 189, 217, 150, 175, 60, 131, 216, 224, 60, 120, 45, 242, 189, 178, 142, 154, 190, 193, 19, 63, 189, 63, 119, 220, 189, 215, 129, 140, 61, 29, 39, 38, 190, 181, 146, 14, 191, 164, 194, 113, 189, 101, 39, 144, 62, 131, 6, 34, 62, 178, 52, 13, 62, 159, 41, 21, 190, 155, 39, 100, 189, 92, 37, 107, 190, 114, 40, 72, 62, 71, 138, 220, 190, 161, 54, 250, 61, 141, 209, 22, 63, 184, 244, 31, 190, 98, 131, 169, 189, 126, 119, 72, 190, 168, 33, 67, 62, 44, 17, 92, 62, 222, 233, 91, 61, 85, 61, 217, 60, 83, 252, 156, 190, 97, 117, 216, 61, 23, 4, 84, 190, 120, 123, 140, 62, 171, 2, 198, 61, 162, 115, 138, 61, 251, 153, 82, 190, 204, 249, 71, 62, 46, 172, 98, 186, 4, 85, 189, 61, 30, 39, 48, 62, 67, 245, 43, 190, 14, 32, 1, 62, 216, 110, 217, 61, 216, 180, 205, 61, 172, 96, 66, 191, 38, 218, 19, 191, 25, 100, 65, 189, 211, 235, 86, 189, 128, 208, 70, 62, 175, 196, 218, 62, 174, 76, 23, 62, 121, 197, 40, 190, 95, 183, 15, 62, 107, 198, 93, 189, 2, 169, 139, 62, 118, 30, 48, 62, 12, 139, 171, 61, 64, 184, 27, 191, 74, 157, 49, 190, 235, 112, 31, 190, 61, 14, 160, 189, 62, 245, 146, 61, 218, 164, 142, 190, 99, 215, 4, 191, 26, 246, 67, 190, 222, 171, 245, 60, 214, 137, 200, 190, 161, 35, 47, 191, 90, 137, 57, 62, 65, 101, 0, 190, 79, 137, 57, 62, 188, 18, 149, 62, 32, 55, 91, 61, 173, 160, 18, 62, 163, 125, 93, 189, 78, 100, 92, 189, 155, 211, 133, 189, 123, 57, 147, 61, 75, 35, 136, 190, 146, 212, 230, 189, 252, 101, 10, 61, 150, 62, 10, 191, 27, 182, 196, 189, 210, 185, 235, 62, 134, 40, 179, 189, 81, 93, 99, 62, 69, 153, 206, 58, 226, 110, 143, 190, 20, 59, 131, 61, 101, 69, 203, 62, 86, 30, 76, 190, 83, 105, 241, 60, 146, 52, 120, 62, 28, 63, 229, 189, 95, 177, 222, 190, 107, 237, 150, 62, 219, 43, 193, 60, 188, 200, 252, 189, 10, 164, 67, 62, 169, 206, 11, 62, 114, 12, 164, 190, 130, 221, 76, 190, 198, 245, 194, 190, 5, 141, 165, 189, 246, 16, 204, 61, 82, 21, 43, 62, 7, 95, 0, 190, 152, 248, 132, 61, 160, 74, 9, 190, 120, 49, 233, 189, 254, 9, 64, 60, 78, 221, 135, 190, 67, 180, 70, 190, 134, 252, 129, 61, 201, 18, 145, 189, 236, 153, 245, 190, 233, 124, 231, 61, 76, 82, 144, 62, 19, 181, 239, 189, 201, 186, 156, 62, 36, 202, 197, 190, 163, 7, 183, 188, 227, 44, 146, 62, 166, 230, 148, 62, 201, 162, 59, 61, 59, 146, 252, 189, 148, 51, 254, 61, 45, 75, 41, 61, 19, 199, 204, 62, 50, 17, 178, 189, 32, 117, 242, 58, 225, 141, 16, 189, 76, 31, 63, 61, 101, 147, 204, 189, 123, 198, 28, 62, 203, 243, 236, 61, 157, 146, 219, 61, 50, 108, 16, 190, 209, 204, 51, 190, 68, 71, 248, 61, 255, 208, 172, 188, 134, 107, 108, 61, 17, 188, 136, 189, 218, 65, 28, 61, 253, 3, 35, 190, 239, 121, 224, 189, 48, 153, 49, 190, 253, 51, 165, 185, 84, 205, 239, 61, 210, 76, 17, 61, 105, 117, 209, 61, 42, 177, 191, 189, 248, 172, 233, 189, 69, 175, 11, 190, 35, 85, 0, 62, 178, 41, 173, 189, 228, 67, 137, 189, 174, 238, 130, 189, 205, 246, 85, 60, 64, 199, 36, 61, 226, 158, 253, 61, 181, 66, 233, 189, 131, 58, 57, 190, 68, 228, 6, 189, 6, 209, 85, 188, 11, 104, 3, 189, 160, 252, 134, 189, 116, 246, 127, 59, 188, 121, 36, 62, 181, 220, 155, 61, 145, 56, 202, 60, 113, 28, 254, 189, 22, 141, 128, 188, 73, 224, 213, 189, 80, 69, 140, 190, 135, 37, 105, 60, 30, 198, 190, 61, 65, 134, 202, 189, 10, 228, 244, 189, 149, 21, 237, 189, 72, 213, 104, 61, 9, 250, 212, 189, 223, 46, 173, 61, 145, 63, 150, 189, 66, 142, 147, 189, 220, 53, 24, 190, 222, 162, 144, 189, 20, 121, 207, 189, 145, 9, 49, 190, 159, 192, 132, 61, 57, 48, 156, 189, 173, 191, 85, 61, 61, 50, 217, 189, 241, 216, 33, 190, 56, 177, 167, 190, 202, 34, 7, 189, 178, 27, 129, 60, 123, 211, 215, 190, 229, 184, 240, 57, 81, 39, 154, 60, 176, 131, 36, 62, 208, 51, 140, 61, 193, 162, 199, 189, 238, 1, 224, 189, 227, 196, 132, 189, 20, 166, 198, 62, 76, 7, 249, 61, 5, 186, 248, 189, 163, 205, 9, 190, 13, 172, 9, 190, 83, 121, 142, 62, 75, 59, 133, 62, 82, 146, 195, 189, 30, 38, 139, 61, 129, 166, 134, 61, 3, 33, 27, 61, 9, 231, 79, 189, 113, 18, 196, 62, 169, 15, 165, 62, 79, 139, 151, 62, 149, 32, 104, 62, 216, 160, 216, 61, 195, 221, 32, 62, 151, 106, 63, 190, 248, 62, 228, 62, 133, 163, 136, 61, 53, 237, 146, 190, 216, 67, 3, 62, 87, 217, 35, 61, 144, 1, 51, 190, 78, 12, 54, 190, 6, 227, 37, 60, 89, 69, 209, 188, 247, 65, 11, 190, 94, 118, 164, 189, 222, 114, 26, 61, 168, 180, 43, 190, 50, 67, 171, 61, 182, 8, 16, 62, 170, 108, 121, 189, 200, 202, 99, 61, 169, 19, 178, 189, 59, 19, 217, 60, 67, 235, 210, 188, 235, 30, 77, 189, 111, 213, 173, 61, 122, 222, 172, 61, 229, 96, 0, 60, 251, 114, 63, 190, 104, 209, 154, 189, 141, 116, 28, 60, 193, 153, 192, 60, 205, 78, 140, 61, 78, 58, 23, 190, 130, 152, 50, 190, 153, 167, 232, 188, 158, 59, 251, 189, 212, 150, 220, 190, 176, 54, 39, 190, 218, 33, 31, 62, 225, 191, 72, 60, 37, 238, 58, 191, 242, 198, 225, 61, 3, 114, 132, 62, 110, 107, 72, 61, 156, 40, 95, 190, 143, 179, 157, 189, 102, 224, 117, 190, 8, 75, 129, 190, 115, 150, 49, 190, 210, 127, 11, 189, 72, 209, 159, 61, 120, 191, 233, 62, 119, 82, 165, 187, 128, 201, 113, 62, 70, 167, 131, 62, 176, 139, 29, 62, 51, 69, 140, 191, 108, 143, 220, 190, 196, 226, 204, 61, 91, 244, 196, 62, 35, 240, 8, 191, 101, 235, 49, 62, 200, 255, 140, 190, 201, 220, 205, 190, 41, 220, 185, 187, 247, 219, 96, 61, 134, 194, 79, 190, 136, 69, 67, 190, 237, 78, 219, 59, 9, 101, 50, 61, 107, 81, 138, 62, 50, 207, 156, 190, 151, 135, 182, 190, 237, 251, 247, 190, 115, 116, 183, 61, 56, 119, 156, 62, 150, 119, 50, 61, 142, 248, 55, 190, 35, 225, 61, 188, 197, 190, 203, 189, 63, 220, 221, 62, 0, 77, 154, 62, 10, 19, 126, 190, 136, 213, 31, 190, 200, 145, 36, 189, 89, 166, 186, 189, 250, 190, 70, 191, 25, 180, 25, 59, 216, 14, 221, 62, 114, 241, 238, 60, 39, 238, 133, 62, 93, 107, 250, 190, 146, 67, 215, 62, 213, 37, 19, 189, 97, 178, 190, 62, 20, 52, 138, 62, 167, 0, 4, 190, 13, 150, 136, 62, 224, 249, 75, 190, 59, 163, 149, 62, 238, 145, 107, 62, 30, 56, 31, 62, 92, 211, 139, 191, 20, 78, 149, 62, 74, 28, 216, 189, 172, 20, 167, 190, 196, 150, 108, 62, 166, 5, 219, 190, 159, 162, 224, 189, 195, 244, 46, 62, 173, 176, 135, 62, 225, 198, 7, 191, 3, 186, 127, 191, 122, 201, 64, 62, 211, 152, 207, 62, 57, 90, 21, 62, 186, 187, 9, 63, 134, 84, 174, 190, 30, 106, 18, 191, 104, 212, 40, 62, 116, 102, 171, 190, 47, 209, 251, 62, 196, 140, 21, 189, 161, 81, 135, 62, 141, 103, 110, 191, 78, 32, 39, 191, 63, 67, 56, 191, 85, 202, 247, 190, 106, 7, 10, 63, 221, 11, 133, 191, 55, 71, 56, 188, 1, 169, 206, 190, 154, 178, 158, 61, 122, 238, 203, 191, 196, 211, 99, 189, 79, 8, 25, 62, 117, 179, 248, 189, 5, 254, 224, 189, 47, 153, 99, 62, 122, 209, 100, 189, 173, 90, 131, 62, 78, 109, 19, 190, 131, 123, 6, 191, 139, 108, 13, 190, 244, 224, 42, 190, 249, 193, 246, 60, 42, 185, 177, 189, 170, 200, 80, 62, 34, 254, 66, 62, 190, 32, 25, 189, 235, 178, 78, 62, 180, 131, 127, 189, 160, 220, 186, 190, 117, 91, 206, 61, 166, 22, 147, 190, 10, 41, 99, 62, 18, 63, 171, 61, 249, 111, 29, 62, 187, 48, 74, 62, 25, 69, 160, 60, 25, 187, 91, 189, 73, 226, 191, 59, 9, 65, 188, 191, 175, 108, 128, 62, 143, 3, 192, 188, 199, 61, 153, 191, 65, 114, 39, 190, 159, 110, 57, 188, 44, 3, 7, 190, 156, 185, 7, 62, 25, 128, 13, 190, 203, 130, 49, 190, 213, 126, 216, 188, 5, 249, 79, 189, 176, 4, 106, 190, 8, 9, 196, 190, 45, 209, 4, 189, 135, 76, 203, 61, 213, 248, 0, 62, 116, 51, 184, 190, 147, 4, 235, 189, 169, 86, 162, 59, 190, 50, 245, 61, 232, 234, 229, 188, 52, 9, 22, 191, 4, 149, 62, 62, 182, 179, 35, 61, 174, 190, 69, 190, 248, 115, 75, 61, 210, 169, 127, 61, 122, 161, 168, 62, 87, 86, 242, 189, 54, 153, 84, 62, 218, 93, 100, 190, 231, 232, 155, 191, 238, 144, 149, 61, 103, 248, 39, 189, 246, 88, 74, 61, 108, 243, 223, 62, 28, 58, 72, 190, 166, 123, 3, 191, 94, 110, 141, 190, 2, 10, 50, 189, 217, 176, 93, 63, 217, 121, 6, 62, 29, 109, 45, 61, 165, 190, 167, 190, 160, 197, 38, 190, 134, 9, 203, 62, 199, 109, 9, 61, 13, 209, 21, 190, 200, 79, 12, 191, 232, 114, 134, 61, 90, 253, 252, 62, 33, 31, 144, 190, 40, 7, 201, 189, 123, 58, 52, 63, 245, 239, 105, 189, 161, 105, 136, 62, 100, 44, 43, 191, 17, 57, 45, 190, 43, 127, 6, 63, 231, 56, 44, 61, 242, 225, 100, 191, 76, 86, 137, 190, 137, 62, 112, 62, 95, 54, 48, 191, 230, 1, 232, 60, 53, 189, 126, 61, 76, 23, 168, 62, 76, 63, 157, 189, 18, 234, 81, 190, 167, 235, 236, 190, 184, 186, 6, 191, 159, 99, 190, 189, 149, 10, 8, 62, 242, 77, 188, 61, 150, 62, 90, 191, 105, 169, 45, 188, 106, 54, 83, 61, 169, 122, 105, 190, 39, 115, 156, 62, 160, 242, 75, 190, 77, 14, 112, 190, 137, 232, 145, 189, 184, 220, 242, 189, 8, 220, 12, 191, 45, 107, 121, 61, 3, 103, 17, 63, 216, 144, 139, 188, 48, 168, 66, 62, 50, 84, 248, 190, 234, 125, 64, 62, 128, 107, 183, 61, 214, 54, 218, 62, 75, 144, 155, 190, 85, 242, 14, 190, 207, 7, 184, 188, 206, 26, 71, 190, 190, 53, 46, 62, 206, 227, 202, 189, 25, 132, 98, 62, 0, 95, 247, 62, 88, 41, 158, 190, 160, 218, 15, 62, 223, 252, 118, 190, 62, 17, 30, 61, 60, 240, 76, 190, 75, 233, 74, 190, 233, 217, 0, 62, 255, 51, 213, 189, 103, 163, 143, 62, 242, 138, 8, 191, 166, 118, 196, 190, 14, 180, 124, 191, 119, 111, 184, 60, 100, 86, 148, 61, 146, 100, 164, 190, 68, 34, 49, 60, 131, 103, 11, 62, 14, 144, 130, 191, 184, 115, 172, 190, 46, 53, 163, 62, 119, 17, 159, 60, 233, 220, 224, 190, 60, 134, 171, 190, 104, 153, 199, 188, 82, 109, 234, 190, 73, 198, 35, 190, 78, 1, 14, 62, 208, 169, 93, 62, 193, 98, 96, 190, 197, 75, 30, 189, 91, 167, 133, 189, 148, 235, 244, 188, 238, 240, 180, 189, 153, 34, 176, 188, 187, 110, 9, 190, 210, 43, 176, 188, 187, 85, 220, 189, 121, 222, 236, 189, 169, 214, 74, 60, 162, 144, 198, 59, 136, 169, 224, 188, 220, 117, 234, 189, 182, 48, 157, 189, 58, 246, 141, 61, 181, 74, 102, 61, 176, 81, 162, 61, 40, 182, 135, 189, 235, 29, 236, 61, 26, 190, 251, 189, 13, 24, 0, 190, 217, 216, 242, 189, 120, 2, 28, 61, 82, 240, 201, 60, 166, 160, 3, 62, 185, 139, 63, 61, 11, 239, 223, 188, 42, 110, 204, 189, 128, 199, 60, 61, 135, 91, 185, 188, 209, 161, 2, 62, 39, 203, 18, 62, 216, 45, 41, 190, 223, 60, 119, 189, 211, 180, 200, 61, 44, 248, 203, 188, 5, 72, 11, 191, 220, 45, 98, 190, 105, 33, 160, 61, 47, 132, 213, 189, 70, 117, 9, 189, 183, 212, 97, 191, 164, 65, 255, 190, 159, 144, 31, 188, 232, 235, 94, 62, 25, 116, 78, 60, 241, 92, 20, 190, 235, 105, 237, 189, 218, 30, 82, 190, 108, 132, 143, 62, 3, 118, 30, 190, 100, 173, 5, 190, 250, 42, 230, 62, 31, 212, 166, 190, 224, 79, 198, 60, 134, 54, 76, 190, 147, 51, 156, 61, 200, 165, 104, 62, 115, 135, 219, 189, 6, 40, 148, 190, 99, 49, 189, 190, 6, 143, 155, 189, 190, 205, 89, 188, 133, 211, 92, 62, 217, 206, 162, 61, 250, 238, 62, 190, 253, 24, 15, 62, 201, 71, 5, 61, 165, 160, 45, 190, 153, 85, 230, 189, 56, 47, 143, 60, 232, 66, 130, 187, 104, 218, 74, 61, 185, 182, 203, 61, 151, 54, 178, 188, 100, 32, 223, 189, 76, 6, 60, 62, 215, 146, 86, 190, 57, 1, 28, 189, 184, 58, 150, 190, 216, 38, 24, 190, 65, 224, 52, 190, 170, 9, 215, 61, 156, 165, 159, 61, 58, 13, 42, 190, 248, 6, 42, 190, 91, 42, 244, 190, 98, 190, 219, 61, 33, 253, 177, 61, 239, 138, 179, 61, 232, 230, 47, 190, 209, 201, 8, 62, 19, 95, 68, 189, 203, 46, 66, 187, 38, 14, 148, 61, 210, 220, 21, 189, 208, 20, 208, 62, 138, 173, 135, 61, 134, 146, 158, 191, 161, 131, 229, 61, 74, 66, 128, 62, 238, 124, 195, 190, 122, 162, 209, 62, 76, 9, 126, 190, 132, 7, 124, 190, 144, 19, 244, 61, 109, 225, 188, 61, 204, 4, 189, 62, 114, 98, 155, 190, 122, 69, 31, 63, 22, 121, 50, 62, 181, 79, 190, 62, 15, 83, 161, 61, 78, 161, 6, 191, 219, 181, 85, 190, 246, 33, 49, 190, 131, 20, 169, 190, 27, 148, 188, 62, 191, 119, 156, 188, 130, 103, 136, 62, 133, 3, 240, 190, 200, 115, 45, 191, 162, 11, 86, 191, 119, 139, 171, 190, 239, 75, 218, 62, 120, 195, 142, 191, 174, 153, 20, 63, 153, 109, 239, 190, 17, 158, 138, 188, 248, 60, 165, 191, 217, 156, 42, 190, 219, 240, 40, 62, 91, 206, 227, 189, 138, 149, 54, 62, 91, 46, 159, 62, 128, 124, 116, 59, 112, 61, 119, 62, 64, 11, 49, 189, 149, 161, 143, 190, 64, 74, 104, 189, 241, 192, 230, 189, 253, 68, 91, 190, 245, 243, 36, 188, 67, 155, 102, 62, 30, 112, 134, 190, 210, 73, 133, 60, 240, 103, 41, 62, 49, 118, 187, 61, 212, 67, 154, 189, 38, 181, 204, 187, 239, 154, 131, 190, 40, 131, 79, 62, 123, 103, 242, 189, 127, 22, 5, 188, 89, 18, 61, 62, 130, 102, 60, 190, 200, 109, 109, 60, 37, 181, 224, 188, 217, 186, 158, 191, 88, 216, 31, 62, 187, 57, 10, 191, 84, 6, 208, 189, 43, 116, 167, 61, 35, 74, 158, 189, 139, 240, 91, 61, 216, 139, 58, 62, 29, 159, 77, 62, 233, 181, 251, 59, 141, 189, 202, 190, 246, 143, 112, 190, 91, 165, 213, 61, 148, 231, 6, 62, 172, 215, 31, 191, 7, 137, 185, 190, 182, 75, 165, 190, 143, 2, 181, 62, 147, 162, 132, 62, 78, 225, 2, 191, 153, 98, 247, 62, 142, 30, 161, 188, 197, 228, 241, 190, 56, 163, 206, 190, 220, 192, 177, 189, 226, 204, 65, 62, 147, 48, 114, 191, 242, 102, 93, 190, 60, 71, 130, 190, 198, 4, 73, 191, 213, 32, 141, 188, 66, 85, 130, 190, 171, 231, 216, 186, 48, 7, 236, 190, 29, 25, 227, 190, 164, 124, 2, 62, 123, 210, 150, 190, 142, 46, 143, 61, 89, 136, 208, 189, 96, 241, 54, 190, 161, 196, 135, 62, 229, 14, 34, 187, 113, 226, 10, 62, 90, 129, 203, 190, 27, 20, 2, 62, 120, 209, 158, 189, 233, 152, 183, 190, 118, 111, 36, 189, 84, 164, 187, 189, 156, 170, 10, 63, 85, 238, 196, 59, 141, 62, 25, 60, 239, 243, 170, 190, 169, 139, 167, 60, 212, 83, 199, 62, 219, 221, 46, 190, 118, 62, 165, 188, 97, 154, 130, 189, 188, 191, 182, 189, 225, 97, 249, 189, 59, 79, 121, 189, 243, 106, 148, 188, 19, 64, 49, 190, 52, 73, 168, 190, 187, 216, 141, 62, 96, 205, 102, 61, 217, 90, 25, 60, 209, 248, 97, 61, 192, 87, 213, 189, 112, 217, 99, 190, 17, 163, 253, 189, 217, 119, 34, 63, 165, 180, 73, 59, 19, 136, 82, 189, 29, 174, 10, 62, 232, 23, 63, 190, 105, 196, 148, 190, 88, 61, 188, 62, 44, 173, 82, 62, 14, 206, 39, 189, 231, 205, 23, 190, 229, 21, 30, 190, 113, 93, 58, 191, 83, 199, 196, 190, 172, 16, 18, 61, 81, 134, 8, 62, 249, 119, 234, 61, 102, 227, 177, 59, 42, 53, 19, 62, 201, 163, 41, 189, 192, 1, 123, 62, 223, 118, 208, 190, 203, 14, 15, 188, 64, 221, 191, 189, 131, 225, 20, 190, 245, 208, 96, 188, 11, 74, 237, 62, 8, 139, 183, 61, 85, 241, 58, 62, 84, 59, 52, 62, 206, 114, 210, 191, 63, 215, 24, 62, 157, 184, 168, 59, 159, 161, 70, 62, 82, 75, 146, 61, 87, 187, 229, 190, 85, 178, 183, 190, 88, 5, 94, 62, 55, 154, 30, 62, 109, 93, 49, 62, 60, 122, 31, 191, 242, 69, 28, 63, 132, 215, 255, 190, 251, 7, 191, 62, 46, 133, 77, 62, 234, 179, 105, 191, 180, 113, 33, 63, 41, 120, 48, 60, 132, 36, 27, 191, 167, 11, 235, 62, 30, 81, 139, 62, 233, 236, 99, 62, 101, 130, 245, 190, 240, 19, 20, 191, 93, 253, 234, 190, 159, 16, 149, 190, 110, 219, 237, 62, 51, 33, 205, 191, 209, 1, 196, 62, 225, 22, 169, 190, 103, 129, 139, 61, 87, 43, 164, 189, 32, 106, 213, 189, 107, 22, 212, 61, 126, 84, 9, 62, 229, 205, 93, 190, 81, 44, 182, 61, 170, 168, 154, 190, 198, 155, 63, 62, 215, 49, 182, 62, 1, 151, 148, 61, 134, 56, 113, 62, 232, 86, 232, 190, 34, 153, 248, 61, 63, 105, 26, 62, 17, 205, 217, 61, 181, 137, 102, 62, 236, 0, 42, 189, 93, 136, 71, 190, 216, 2, 226, 189, 187, 249, 126, 187, 21, 242, 131, 61, 178, 41, 57, 62, 193, 83, 56, 190, 37, 9, 60, 189, 105, 109, 18, 190, 44, 138, 15, 62, 10, 31, 63, 190, 84, 141, 15, 62, 83, 135, 89, 189, 106, 206, 235, 62, 20, 192, 3, 62, 202, 64, 140, 190, 114, 2, 144, 62, 79, 161, 170, 189, 171, 68, 123, 190, 47, 137, 226, 189, 191, 2, 157, 190, 115, 176, 96, 189, 195, 250, 171, 190, 215, 97, 105, 62, 244, 22, 205, 190, 148, 160, 112, 189, 132, 149, 28, 61, 207, 110, 228, 190, 152, 157, 193, 60, 222, 67, 139, 190, 40, 250, 149, 189, 171, 130, 118, 190, 50, 134, 53, 62, 30, 228, 183, 190, 93, 23, 237, 189, 201, 9, 18, 62, 178, 240, 14, 190, 148, 80, 162, 62, 21, 122, 81, 190, 231, 78, 175, 60, 106, 95, 71, 62, 132, 175, 213, 61, 21, 63, 25, 190, 200, 93, 165, 189, 152, 172, 35, 62, 12, 6, 174, 62, 159, 41, 189, 62};
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
                alignas(float) const unsigned char memory[] = {216, 133, 141, 61, 166, 46, 110, 190, 122, 91, 31, 190, 166, 19, 112, 62, 87, 46, 50, 62, 45, 224, 18, 62, 164, 248, 39, 62, 110, 128, 116, 61, 85, 143, 77, 62, 54, 149, 202, 189, 183, 81, 88, 189, 51, 60, 235, 189, 149, 38, 22, 189, 139, 190, 100, 62, 83, 46, 96, 62, 195, 10, 111, 62, 24, 137, 193, 188, 32, 236, 31, 190, 127, 92, 61, 62, 25, 117, 254, 61, 195, 132, 63, 60, 168, 243, 248, 189, 242, 142, 5, 189, 160, 49, 176, 190, 75, 196, 187, 61, 30, 50, 176, 190, 141, 35, 172, 61, 4, 59, 194, 62, 86, 147, 14, 62, 203, 48, 21, 62, 251, 90, 177, 61, 188, 216, 111, 62};
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
                alignas(float) const unsigned char memory[] = {129, 176, 204, 189, 15, 112, 0, 191, 25, 142, 224, 61, 136, 172, 3, 63, 209, 29, 186, 59, 161, 159, 141, 62, 53, 41, 168, 189, 240, 22, 233, 190, 132, 70, 16, 62, 152, 32, 130, 189, 195, 227, 181, 61, 138, 120, 224, 190, 53, 15, 153, 189, 129, 246, 190, 62, 200, 114, 242, 62, 100, 9, 135, 191, 218, 150, 15, 191, 65, 146, 16, 191, 96, 223, 126, 63, 69, 108, 18, 63, 243, 167, 143, 63, 1, 127, 237, 61, 198, 91, 107, 185, 188, 89, 230, 189, 128, 169, 74, 191, 81, 87, 23, 191, 208, 217, 28, 63, 191, 19, 184, 187, 46, 87, 169, 190, 71, 43, 205, 191, 97, 137, 128, 188, 111, 241, 163, 61, 152, 21, 52, 63, 8, 111, 105, 62, 204, 49, 212, 187, 43, 118, 24, 190, 122, 151, 14, 191, 126, 12, 139, 189, 88, 38, 184, 190, 133, 177, 44, 190, 244, 163, 68, 190, 233, 100, 120, 61, 22, 95, 178, 60, 245, 250, 209, 189, 248, 149, 253, 61, 48, 191, 128, 190, 115, 185, 39, 189, 101, 197, 144, 189, 112, 167, 239, 189, 14, 46, 37, 190, 236, 77, 156, 62, 219, 112, 216, 186, 166, 138, 166, 62, 245, 210, 10, 190, 230, 104, 218, 62, 76, 201, 58, 61, 249, 213, 24, 62, 32, 206, 14, 62, 125, 48, 132, 63, 192, 139, 30, 191, 132, 156, 155, 62, 111, 155, 147, 62, 253, 186, 94, 190, 164, 98, 162, 190};
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
                alignas(float) const unsigned char memory[] = {199, 135, 75, 189, 148, 58, 131, 190};
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
    alignas(float) const unsigned char memory[] = {29, 80, 129, 62, 160, 164, 18, 63, 221, 11, 199, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {85, 145, 35, 63, 252, 159, 161, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0014/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}