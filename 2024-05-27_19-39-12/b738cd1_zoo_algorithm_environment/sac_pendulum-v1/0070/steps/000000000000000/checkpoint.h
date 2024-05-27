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
                alignas(float) const unsigned char memory[] = {249, 38, 62, 190, 149, 248, 46, 62, 209, 185, 151, 61, 44, 12, 90, 61, 223, 252, 60, 190, 65, 184, 177, 190, 101, 194, 33, 190, 231, 108, 160, 190, 1, 207, 223, 62, 226, 161, 86, 189, 98, 221, 174, 62, 106, 139, 0, 62, 255, 67, 92, 61, 160, 13, 164, 190, 100, 81, 145, 62, 68, 57, 154, 62, 79, 157, 187, 62, 194, 197, 1, 191, 52, 61, 208, 189, 21, 143, 11, 61, 93, 175, 169, 189, 163, 55, 168, 62, 229, 255, 28, 62, 199, 252, 226, 190, 159, 188, 25, 190, 56, 209, 140, 190, 15, 2, 103, 190, 205, 144, 114, 62, 134, 55, 33, 190, 137, 200, 1, 63, 181, 88, 154, 62, 11, 249, 97, 190, 248, 5, 94, 188, 9, 153, 200, 190, 143, 152, 204, 62, 193, 194, 185, 62, 253, 109, 15, 63, 5, 132, 186, 189, 110, 176, 247, 62, 93, 234, 173, 60, 34, 210, 19, 60, 12, 96, 190, 62, 140, 26, 138, 62, 136, 86, 126, 61, 53, 103, 108, 190, 255, 217, 189, 62, 166, 81, 57, 62, 238, 241, 50, 62, 44, 213, 252, 190, 133, 69, 234, 62, 112, 19, 137, 189, 54, 248, 155, 190, 64, 114, 109, 61, 219, 142, 133, 190, 189, 69, 225, 62, 209, 129, 4, 62, 211, 154, 12, 63, 172, 87, 132, 61, 126, 176, 255, 190, 166, 46, 90, 62, 21, 10, 237, 62, 167, 192, 220, 190, 252, 217, 224, 62, 215, 159, 105, 62, 141, 212, 134, 190, 72, 225, 160, 59, 212, 52, 243, 190, 125, 104, 134, 61, 44, 31, 147, 62, 231, 34, 136, 189, 48, 168, 10, 63, 202, 173, 0, 191, 213, 45, 146, 62, 147, 193, 223, 190, 106, 24, 4, 188, 216, 70, 164, 190, 72, 55, 255, 189, 42, 175, 62, 62, 4, 231, 206, 61, 8, 44, 11, 63, 74, 32, 53, 190, 47, 49, 255, 189, 16, 118, 195, 62, 3, 120, 219, 190, 91, 81, 152, 190, 48, 116, 32, 190, 16, 98, 168, 62, 180, 80, 233, 190, 215, 126, 144, 62, 242, 176, 141, 190, 136, 124, 160, 187, 108, 177, 169, 190, 148, 110, 201, 189, 14, 32, 243, 189, 98, 130, 214, 61, 124, 217, 9, 191};
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
                alignas(float) const unsigned char memory[] = {45, 163, 19, 191, 117, 3, 193, 62, 108, 153, 159, 190, 182, 94, 19, 63, 226, 66, 51, 62, 1, 81, 39, 62, 15, 148, 249, 190, 56, 13, 42, 61, 181, 162, 30, 62, 178, 187, 246, 62, 35, 14, 60, 61, 219, 45, 143, 190, 233, 176, 34, 190, 250, 212, 225, 62, 52, 30, 74, 61, 70, 104, 159, 190, 47, 141, 4, 191, 158, 208, 118, 190, 140, 84, 76, 62, 26, 6, 183, 62, 59, 153, 162, 62, 146, 24, 44, 62, 121, 108, 8, 63, 190, 137, 249, 62, 150, 58, 143, 190, 177, 194, 207, 190, 92, 212, 244, 62, 43, 210, 3, 63, 9, 68, 19, 190, 255, 13, 57, 190, 144, 179, 59, 189, 37, 87, 241, 62};
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
                alignas(float) const unsigned char memory[] = {47, 57, 131, 60, 210, 115, 44, 62, 80, 151, 147, 189, 116, 172, 123, 61, 126, 45, 52, 189, 179, 45, 27, 189, 99, 21, 37, 60, 162, 3, 213, 187, 59, 185, 17, 188, 129, 193, 137, 61, 72, 8, 40, 190, 164, 252, 15, 62, 117, 220, 241, 61, 210, 214, 157, 187, 134, 89, 217, 59, 238, 214, 227, 61, 156, 229, 44, 190, 3, 247, 27, 190, 65, 253, 13, 190, 29, 43, 17, 62, 189, 157, 133, 61, 167, 135, 33, 62, 187, 226, 189, 189, 216, 66, 34, 62, 153, 180, 229, 189, 60, 114, 113, 61, 43, 247, 128, 61, 109, 198, 51, 62, 13, 249, 188, 189, 190, 198, 3, 190, 190, 111, 46, 190, 104, 33, 12, 61, 13, 162, 76, 61, 39, 128, 200, 188, 72, 184, 47, 190, 210, 52, 46, 190, 9, 88, 158, 189, 162, 202, 22, 190, 64, 104, 165, 189, 9, 38, 5, 190, 42, 102, 134, 189, 253, 242, 9, 62, 8, 99, 128, 60, 96, 125, 186, 59, 181, 138, 36, 190, 240, 245, 30, 62, 49, 25, 41, 62, 154, 86, 6, 61, 82, 109, 22, 61, 166, 203, 122, 189, 173, 246, 228, 61, 250, 254, 11, 190, 226, 17, 188, 188, 125, 60, 254, 189, 225, 205, 168, 189, 141, 99, 157, 189, 209, 64, 180, 189, 28, 201, 65, 60, 222, 121, 187, 61, 245, 49, 9, 190, 3, 224, 105, 188, 33, 24, 25, 62, 156, 76, 57, 61, 99, 13, 36, 190, 255, 67, 231, 61, 94, 98, 136, 60, 159, 170, 25, 62, 32, 176, 222, 189, 151, 254, 154, 60, 30, 52, 23, 62, 11, 33, 1, 62, 255, 102, 21, 190, 151, 195, 190, 61, 186, 90, 173, 188, 74, 27, 112, 60, 150, 49, 248, 189, 11, 3, 16, 60, 91, 48, 98, 189, 104, 147, 22, 189, 209, 201, 33, 62, 67, 9, 191, 189, 204, 69, 186, 189, 82, 249, 225, 61, 104, 166, 157, 61, 16, 231, 224, 61, 63, 65, 254, 61, 198, 70, 243, 189, 99, 90, 106, 61, 166, 43, 81, 189, 157, 201, 19, 62, 156, 144, 163, 189, 19, 86, 15, 62, 188, 120, 58, 61, 170, 139, 93, 61, 155, 166, 155, 61, 237, 67, 9, 189, 10, 29, 240, 189, 27, 177, 23, 190, 31, 90, 1, 188, 240, 128, 223, 189, 148, 65, 46, 61, 203, 154, 10, 62, 33, 217, 43, 62, 110, 212, 184, 189, 42, 207, 142, 189, 103, 205, 114, 61, 208, 99, 240, 188, 157, 118, 108, 60, 175, 96, 251, 60, 105, 94, 202, 189, 25, 5, 221, 189, 60, 252, 164, 189, 23, 79, 26, 62, 243, 142, 46, 190, 43, 80, 30, 62, 66, 245, 18, 62, 181, 163, 191, 61, 244, 228, 188, 61, 83, 185, 37, 190, 196, 108, 30, 190, 148, 181, 19, 62, 156, 224, 75, 61, 211, 8, 106, 61, 67, 93, 101, 61, 242, 142, 120, 188, 221, 103, 130, 189, 72, 38, 213, 60, 214, 92, 37, 189, 2, 238, 244, 61, 1, 52, 154, 61, 223, 169, 219, 61, 66, 29, 185, 189, 176, 134, 144, 61, 202, 42, 229, 189, 209, 221, 244, 189, 117, 222, 184, 61, 235, 39, 26, 61, 173, 165, 21, 61, 55, 105, 162, 189, 48, 12, 130, 61, 90, 168, 11, 190, 252, 226, 0, 190, 31, 125, 241, 189, 11, 4, 248, 189, 59, 163, 95, 61, 211, 20, 51, 62, 40, 12, 41, 190, 151, 185, 196, 61, 7, 185, 219, 61, 40, 11, 45, 61, 226, 70, 224, 61, 48, 76, 121, 189, 179, 210, 216, 189, 30, 88, 136, 61, 243, 214, 167, 189, 120, 172, 120, 61, 184, 115, 169, 60, 37, 197, 226, 61, 125, 2, 218, 189, 151, 14, 1, 190, 16, 194, 247, 60, 68, 116, 205, 189, 9, 93, 226, 60, 90, 130, 29, 190, 178, 201, 241, 188, 221, 161, 206, 188, 209, 91, 193, 188, 103, 213, 110, 188, 180, 85, 80, 60, 12, 111, 43, 62, 146, 97, 50, 190, 79, 49, 26, 188, 91, 118, 10, 190, 218, 239, 64, 61, 218, 77, 136, 61, 144, 145, 106, 189, 207, 107, 1, 190, 53, 87, 82, 189, 77, 130, 121, 189, 79, 0, 179, 61, 37, 172, 7, 189, 243, 63, 21, 62, 147, 237, 248, 189, 123, 180, 233, 187, 133, 200, 114, 188, 221, 126, 25, 190, 34, 33, 175, 61, 221, 182, 76, 60, 64, 247, 52, 188, 215, 218, 183, 188, 81, 64, 29, 61, 82, 250, 27, 60, 248, 177, 185, 61, 53, 151, 205, 61, 34, 157, 2, 61, 166, 233, 48, 189, 178, 231, 154, 189, 165, 90, 18, 62, 233, 182, 164, 61, 230, 253, 208, 61, 71, 161, 80, 60, 45, 206, 238, 61, 113, 47, 164, 60, 17, 205, 179, 189, 47, 181, 42, 190, 98, 104, 142, 61, 163, 96, 48, 190, 112, 178, 115, 187, 248, 102, 167, 61, 24, 173, 235, 189, 178, 250, 24, 190, 192, 179, 151, 61, 28, 42, 182, 61, 29, 128, 239, 61, 73, 44, 138, 61, 208, 90, 157, 61, 54, 45, 37, 62, 106, 145, 46, 60, 30, 222, 52, 190, 19, 237, 37, 190, 122, 220, 128, 61, 253, 249, 222, 60, 115, 209, 0, 189, 185, 119, 95, 188, 152, 27, 8, 62, 231, 193, 30, 190, 211, 51, 52, 188, 143, 101, 91, 61, 141, 160, 199, 61, 73, 251, 240, 189, 31, 131, 27, 62, 168, 46, 8, 62, 2, 39, 209, 59, 10, 223, 24, 62, 194, 108, 162, 189, 151, 28, 77, 189, 95, 225, 47, 190, 127, 200, 196, 60, 143, 122, 251, 188, 235, 247, 221, 189, 109, 234, 176, 189, 177, 137, 52, 190, 5, 121, 86, 189, 106, 53, 58, 189, 213, 124, 18, 189, 94, 162, 26, 189, 96, 12, 250, 61, 245, 127, 12, 60, 193, 190, 250, 189, 189, 88, 143, 189, 3, 133, 221, 189, 58, 31, 124, 61, 70, 25, 228, 60, 251, 93, 4, 190, 77, 219, 5, 61, 16, 223, 47, 190, 249, 15, 144, 188, 235, 113, 230, 59, 148, 227, 225, 61, 76, 93, 178, 61, 16, 232, 53, 61, 139, 136, 119, 61, 33, 102, 127, 189, 76, 213, 31, 189, 177, 214, 37, 59, 1, 0, 212, 61, 63, 68, 72, 189, 193, 172, 184, 189, 91, 0, 17, 62, 238, 26, 28, 62, 60, 185, 8, 189, 138, 98, 154, 61, 114, 14, 45, 190, 125, 6, 109, 61, 53, 212, 60, 189, 13, 188, 48, 62, 249, 86, 21, 190, 138, 57, 116, 61, 186, 202, 25, 62, 177, 143, 47, 190, 219, 147, 46, 189, 217, 80, 35, 189, 34, 244, 20, 190, 172, 93, 6, 61, 0, 139, 25, 62, 189, 108, 112, 188, 162, 194, 23, 62, 160, 93, 145, 61, 211, 110, 143, 189, 107, 109, 223, 189, 94, 237, 30, 189, 20, 5, 45, 190, 102, 221, 70, 189, 193, 126, 155, 59, 107, 201, 23, 190, 109, 38, 28, 190, 181, 179, 101, 59, 119, 106, 10, 190, 114, 191, 209, 61, 131, 133, 22, 190, 234, 159, 221, 61, 159, 19, 192, 61, 48, 208, 19, 62, 175, 139, 68, 188, 218, 160, 193, 189, 80, 227, 25, 190, 131, 209, 26, 60, 17, 92, 143, 61, 20, 212, 13, 190, 42, 195, 63, 189, 140, 156, 32, 62, 71, 8, 21, 61, 25, 47, 2, 190, 10, 190, 31, 62, 138, 177, 178, 189, 39, 230, 170, 61, 7, 72, 101, 189, 221, 187, 241, 58, 235, 142, 237, 189, 51, 73, 31, 189, 214, 187, 6, 190, 254, 239, 163, 61, 40, 103, 182, 61, 192, 153, 66, 189, 45, 162, 51, 190, 11, 58, 111, 189, 47, 137, 23, 190, 232, 38, 157, 61, 203, 122, 180, 189, 156, 204, 161, 189, 95, 47, 9, 62, 21, 83, 27, 190, 111, 184, 242, 61, 94, 1, 198, 188, 159, 7, 7, 187, 109, 225, 157, 60, 254, 166, 111, 61, 208, 152, 1, 62, 200, 224, 221, 61, 74, 230, 84, 61, 203, 75, 59, 189, 35, 122, 201, 61, 49, 18, 14, 190, 59, 84, 15, 190, 86, 124, 148, 61, 191, 240, 19, 190, 149, 86, 60, 61, 158, 28, 133, 189, 116, 0, 189, 61, 130, 212, 78, 60, 51, 24, 27, 61, 23, 248, 146, 186, 190, 138, 148, 61, 248, 81, 19, 189, 50, 8, 167, 61, 41, 202, 237, 60, 187, 98, 59, 189, 240, 154, 172, 61, 218, 3, 33, 62, 97, 69, 109, 189, 152, 67, 202, 61, 120, 94, 54, 189, 175, 219, 38, 62, 172, 94, 5, 61, 104, 52, 69, 189, 92, 92, 203, 61, 151, 245, 239, 61, 164, 167, 99, 189, 132, 99, 42, 189, 73, 118, 52, 190, 56, 89, 6, 62, 166, 17, 31, 189, 222, 100, 50, 189, 150, 230, 18, 190, 22, 73, 15, 62, 238, 152, 163, 189, 15, 180, 1, 190, 246, 237, 178, 189, 180, 183, 175, 189, 112, 33, 226, 61, 83, 168, 80, 189, 170, 216, 2, 62, 127, 10, 223, 61, 61, 43, 75, 61, 106, 19, 46, 189, 219, 62, 210, 189, 219, 107, 70, 189, 197, 46, 105, 61, 129, 70, 197, 61, 171, 123, 229, 60, 54, 113, 240, 189, 201, 253, 147, 188, 100, 169, 159, 61, 62, 178, 205, 58, 41, 25, 16, 190, 78, 198, 50, 62, 83, 88, 212, 61, 137, 71, 60, 189, 230, 48, 66, 189, 219, 61, 186, 61, 244, 165, 56, 188, 248, 100, 182, 61, 26, 117, 240, 189, 191, 46, 18, 190, 30, 55, 193, 189, 117, 81, 106, 61, 132, 79, 35, 62, 31, 47, 18, 62, 45, 228, 242, 61, 204, 16, 19, 189, 126, 19, 134, 61, 219, 133, 50, 61, 80, 178, 13, 189, 77, 55, 52, 62, 21, 144, 150, 61, 25, 81, 141, 189, 101, 97, 233, 59, 40, 55, 27, 190, 4, 124, 16, 62, 98, 110, 28, 62, 74, 198, 97, 60, 225, 164, 212, 60, 230, 173, 136, 188, 56, 203, 69, 189, 30, 128, 32, 62, 130, 25, 150, 188, 6, 91, 159, 187, 107, 82, 131, 189, 19, 70, 140, 189, 211, 42, 244, 59, 157, 88, 159, 61, 218, 119, 231, 189, 244, 6, 182, 61, 31, 80, 79, 61, 19, 96, 66, 60, 196, 146, 45, 188, 207, 131, 11, 62, 119, 12, 196, 189, 82, 207, 14, 62, 235, 91, 222, 189, 50, 128, 225, 189, 164, 122, 170, 189, 104, 4, 7, 189, 179, 99, 194, 59, 50, 69, 5, 59, 225, 140, 239, 189, 156, 246, 251, 189, 175, 146, 43, 190, 52, 243, 120, 61, 167, 11, 192, 61, 129, 141, 227, 189, 19, 159, 66, 61, 172, 175, 189, 189, 255, 89, 224, 60, 103, 137, 31, 189, 126, 48, 34, 62, 232, 151, 0, 62, 217, 83, 203, 189, 236, 154, 31, 62, 23, 133, 11, 62, 204, 87, 94, 188, 212, 137, 41, 189, 69, 37, 6, 62, 171, 6, 42, 62, 0, 201, 98, 61, 101, 213, 10, 60, 104, 111, 131, 189, 236, 237, 128, 61, 80, 23, 247, 189, 207, 2, 10, 190, 242, 224, 249, 60, 5, 200, 249, 59, 50, 200, 3, 62, 153, 22, 184, 189, 103, 103, 175, 59, 61, 144, 39, 62, 17, 211, 111, 189, 55, 198, 0, 190, 174, 25, 40, 189, 119, 71, 176, 60, 198, 15, 226, 189, 191, 168, 183, 189, 200, 219, 14, 188, 240, 4, 52, 190, 237, 117, 216, 188, 193, 171, 16, 189, 52, 19, 2, 188, 137, 42, 19, 190, 179, 14, 214, 60, 100, 99, 95, 61, 132, 203, 16, 190, 37, 18, 90, 61, 79, 171, 34, 189, 197, 106, 7, 61, 84, 35, 8, 190, 33, 232, 78, 60, 93, 149, 238, 61, 60, 231, 7, 189, 128, 27, 193, 189, 160, 225, 241, 189, 157, 199, 36, 190, 151, 153, 14, 62, 239, 211, 147, 188, 125, 30, 117, 61, 130, 171, 141, 189, 69, 49, 12, 190, 84, 45, 134, 189, 10, 146, 40, 190, 66, 184, 22, 62, 222, 207, 21, 189, 121, 118, 225, 61, 140, 61, 0, 62, 101, 110, 3, 61, 201, 68, 4, 62, 214, 226, 244, 61, 228, 40, 145, 61, 89, 166, 13, 62, 89, 140, 104, 189, 232, 82, 3, 61, 128, 254, 43, 61, 121, 124, 61, 61, 230, 67, 75, 61, 222, 199, 164, 60, 249, 153, 149, 61, 82, 143, 49, 62, 198, 196, 17, 189, 9, 12, 172, 61, 102, 185, 48, 62, 164, 32, 27, 61, 214, 73, 9, 62, 56, 255, 5, 62, 57, 175, 27, 190, 123, 64, 7, 190, 152, 157, 121, 61, 218, 22, 103, 187, 74, 75, 8, 62, 45, 147, 152, 61, 72, 237, 49, 190, 184, 154, 178, 60, 132, 114, 25, 62, 210, 19, 46, 190, 166, 154, 169, 189, 25, 153, 156, 61, 145, 214, 27, 189, 251, 251, 251, 61, 246, 49, 99, 188, 61, 197, 141, 189, 3, 112, 202, 61, 119, 157, 15, 189, 175, 129, 167, 61, 253, 97, 13, 61, 161, 4, 74, 189, 51, 58, 23, 62, 69, 163, 38, 62, 162, 77, 71, 189, 51, 164, 215, 188, 148, 154, 250, 189, 18, 142, 238, 60, 150, 57, 225, 61, 42, 127, 113, 189, 220, 43, 171, 61, 164, 226, 105, 61, 129, 135, 26, 62, 12, 191, 182, 189, 227, 162, 110, 61, 13, 241, 28, 190, 44, 81, 192, 61, 66, 169, 121, 187, 250, 107, 9, 189, 29, 8, 31, 61, 14, 233, 223, 189, 240, 200, 231, 189, 209, 80, 18, 189, 89, 246, 32, 189, 170, 173, 12, 189, 51, 120, 227, 61, 219, 114, 157, 60, 28, 220, 246, 189, 253, 26, 154, 187, 74, 141, 29, 62, 243, 17, 192, 60, 77, 163, 29, 190, 48, 30, 168, 188, 123, 253, 26, 62, 10, 139, 77, 61, 174, 143, 50, 62, 179, 61, 12, 62, 209, 4, 31, 62, 247, 152, 110, 61, 174, 9, 40, 61, 105, 168, 154, 61, 231, 129, 77, 189, 26, 90, 229, 188, 35, 235, 6, 61, 79, 184, 106, 189, 111, 71, 37, 189, 52, 55, 142, 189, 39, 119, 155, 188, 110, 115, 90, 189, 63, 21, 216, 189, 132, 129, 4, 62, 46, 33, 254, 61, 198, 144, 175, 189, 253, 240, 100, 189, 85, 156, 140, 188, 68, 2, 145, 60, 39, 5, 43, 62, 76, 17, 220, 61, 31, 78, 47, 62, 115, 32, 166, 61, 90, 8, 202, 60, 23, 239, 7, 62, 77, 183, 49, 62, 70, 111, 88, 61, 236, 29, 19, 189, 30, 69, 20, 190, 116, 110, 118, 189, 133, 36, 75, 188, 80, 223, 19, 190, 149, 199, 210, 61, 248, 164, 40, 190, 9, 47, 187, 187, 34, 53, 34, 62, 234, 232, 141, 61, 118, 112, 129, 188, 179, 64, 51, 189, 227, 201, 6, 190, 166, 165, 232, 189, 127, 62, 35, 189, 157, 78, 24, 62, 239, 59, 22, 190, 203, 79, 254, 189, 121, 210, 190, 59, 49, 242, 117, 189, 188, 107, 17, 190, 121, 64, 12, 61, 38, 188, 191, 189, 184, 159, 44, 190, 14, 249, 175, 61, 88, 239, 11, 190, 85, 223, 186, 189, 247, 165, 13, 62, 89, 116, 166, 189, 20, 74, 234, 61, 91, 44, 169, 61, 213, 115, 156, 189, 92, 31, 48, 62, 129, 246, 122, 61, 157, 53, 7, 190, 163, 161, 79, 61, 191, 189, 195, 189, 187, 109, 41, 190, 48, 14, 25, 190, 37, 56, 235, 189, 184, 27, 131, 61, 201, 125, 169, 61, 170, 33, 114, 61, 237, 0, 62, 61, 220, 92, 81, 61, 211, 117, 128, 189, 240, 43, 167, 61, 119, 169, 233, 61, 242, 197, 238, 189, 220, 248, 224, 189, 76, 159, 78, 60, 244, 144, 51, 190, 178, 148, 115, 188, 124, 171, 189, 61, 154, 89, 37, 190, 44, 73, 230, 188, 190, 67, 236, 189, 94, 79, 237, 188, 249, 166, 184, 59, 185, 102, 46, 189, 65, 218, 193, 188, 183, 3, 6, 61, 19, 215, 250, 61, 150, 248, 17, 62, 169, 66, 33, 62, 140, 224, 163, 61, 186, 225, 86, 189, 117, 100, 52, 61, 158, 247, 16, 190, 59, 220, 93, 61, 80, 36, 64, 189, 252, 87, 100, 60, 185, 224, 42, 190, 12, 61, 218, 61, 24, 217, 241, 189, 100, 71, 230, 61, 183, 210, 79, 61, 60, 59, 132, 188, 241, 185, 235, 189, 219, 86, 21, 62, 57, 194, 137, 189, 161, 150, 16, 62, 143, 68, 187, 61, 220, 214, 153, 189, 181, 67, 78, 61, 242, 84, 67, 189, 43, 77, 197, 59, 183, 213, 166, 61, 71, 134, 51, 190, 144, 228, 25, 189, 186, 67, 203, 189, 218, 205, 12, 189, 40, 6, 82, 189, 206, 59, 52, 190, 125, 238, 12, 188, 127, 241, 7, 61, 159, 34, 194, 189, 122, 142, 138, 189, 24, 240, 45, 189, 199, 105, 225, 61, 195, 227, 146, 61, 232, 110, 36, 190, 212, 254, 45, 62, 213, 163, 26, 62, 175, 113, 39, 189, 51, 32, 234, 189, 99, 247, 29, 190, 138, 39, 222, 189, 190, 130, 30, 62, 203, 249, 24, 190, 4, 31, 7, 62, 99, 122, 174, 189, 182, 23, 240, 60, 28, 164, 169, 61, 255, 119, 1, 190, 109, 180, 0, 190, 96, 116, 30, 61, 60, 61, 44, 187, 39, 24, 185, 60, 35, 47, 243, 60, 63, 44, 123, 61, 77, 166, 181, 60, 105, 183, 145, 189, 131, 12, 227, 189, 205, 253, 117, 189, 160, 175, 207, 60, 226, 229, 131, 61, 64, 191, 29, 190, 181, 192, 55, 189, 58, 60, 17, 62, 159, 90, 208, 61, 231, 153, 167, 61, 101, 11, 212, 61, 31, 127, 24, 189, 163, 201, 95, 61, 247, 184, 170, 61, 145, 201, 184, 189, 40, 181, 153, 189, 218, 149, 143, 61, 162, 219, 93, 189, 64, 152, 103, 61, 27, 118, 98, 189, 148, 133, 192, 189, 75, 12, 188, 61, 46, 129, 21, 189, 76, 96, 47, 189, 84, 2, 10, 190, 49, 152, 123, 61, 177, 227, 124, 188, 40, 137, 183, 61, 227, 33, 105, 61, 188, 44, 225, 189, 160, 52, 240, 61, 82, 7, 32, 190, 72, 66, 246, 59, 224, 229, 183, 61, 124, 197, 28, 190, 158, 8, 112, 61, 153, 84, 156, 189, 110, 190, 230, 61, 75, 209, 183, 188, 29, 69, 235, 61, 138, 52, 0, 187, 26, 78, 221, 58, 159, 185, 190, 61, 24, 5, 80, 60, 6, 74, 31, 190, 105, 114, 206, 61, 153, 60, 77, 188, 97, 104, 47, 190, 108, 55, 69, 59, 5, 172, 153, 60, 80, 209, 185, 189, 100, 155, 54, 189, 159, 248, 217, 189, 165, 48, 39, 190, 79, 147, 52, 190, 214, 83, 28, 61, 2, 161, 221, 61, 174, 27, 4, 62, 140, 132, 39, 189, 231, 3, 129, 189, 127, 136, 252, 61, 251, 221, 215, 189, 184, 140, 8, 62, 95, 252, 219, 60, 59, 16, 225, 61, 172, 219, 243, 60, 237, 83, 244, 60, 39, 249, 136, 189, 84, 236, 5, 190, 95, 70, 80, 189, 230, 231, 142, 189, 93, 213, 216, 188, 184, 133, 190, 189, 63, 18, 239, 189, 127, 163, 165, 189, 26, 93, 188, 61, 117, 105, 162, 61, 123, 78, 99, 189, 179, 116, 218, 188, 35, 76, 233, 61, 113, 219, 150, 61, 117, 1, 3, 190, 5, 61, 213, 61, 183, 217, 14, 190, 123, 251, 24, 62, 67, 153, 194, 188, 116, 137, 171, 189, 86, 227, 254, 61, 107, 254, 2, 62, 196, 79, 96, 61, 88, 55, 229, 61, 2, 104, 44, 62, 29, 51, 250, 189, 121, 201, 39, 62, 93, 193, 153, 61, 108, 206, 4, 189, 66, 169, 79, 61, 66, 185, 215, 60, 169, 10, 127, 189, 240, 147, 83, 60, 195, 237, 41, 189, 185, 174, 103, 189, 40, 183, 71, 61, 53, 85, 76, 189, 26, 222, 33, 190, 125, 5, 22, 190, 176, 251, 44, 190, 13, 87, 29, 190, 150, 25, 167, 189, 194, 61, 247, 61, 73, 27, 64, 189, 84, 85, 34, 62, 16, 129, 75, 60, 55, 163, 37, 62, 183, 46, 27, 62, 253, 205, 202, 60, 113, 214, 80, 189, 16, 14, 196, 61, 21, 219, 180, 189, 45, 194, 133, 60, 88, 107, 135, 61, 57, 137, 217, 61, 65, 192, 2, 62, 154, 81, 43, 189, 148, 97, 211, 189, 64, 252, 51, 190, 68, 202, 52, 190, 189, 224, 76, 61, 77, 179, 201, 61, 190, 61, 151, 189, 107, 130, 34, 62, 195, 172, 152, 61, 232, 253, 118, 189, 26, 249, 38, 62, 251, 107, 26, 62, 74, 216, 175, 189, 217, 86, 1, 62, 168, 24, 249, 61, 103, 130, 213, 188, 42, 150, 21, 60, 6, 239, 206, 59, 19, 252, 147, 61, 136, 96, 93, 188, 235, 221, 227, 189, 96, 254, 98, 189, 135, 177, 32, 190, 236, 73, 5, 61, 109, 161, 222, 188, 141, 157, 11, 61, 135, 53, 253, 61, 142, 67, 13, 62, 161, 108, 219, 188, 184, 172, 215, 189, 5, 184, 98, 189, 150, 68, 184, 189, 154, 2, 96, 189, 103, 128, 131, 61, 95, 160, 3, 62, 219, 156, 44, 190, 240, 90, 172, 189, 135, 20, 185, 188, 188, 201, 97, 186, 224, 79, 161, 60, 241, 176, 225, 60, 52, 94, 243, 189, 225, 140, 89, 60, 125, 20, 153, 61, 5, 43, 169, 61, 251, 179, 244, 189, 57, 120, 140, 60, 163, 153, 62, 61, 69, 8, 197, 60, 65, 10, 2, 62, 152, 76, 48, 189, 190, 211, 7, 189, 195, 168, 10, 190, 193, 79, 52, 187, 16, 11, 151, 61, 103, 144, 125, 188, 179, 90, 214, 61, 164, 43, 50, 190, 72, 199, 178, 189, 24, 141, 191, 61, 195, 226, 151, 61, 32, 48, 48, 190, 169, 172, 154, 189, 255, 174, 175, 189, 184, 254, 18, 61, 216, 201, 234, 186, 158, 74, 94, 189, 30, 92, 58, 61, 11, 230, 80, 189, 91, 60, 136, 189, 130, 223, 181, 189, 146, 218, 28, 62, 226, 170, 247, 189, 166, 166, 172, 61, 242, 144, 50, 190, 1, 120, 10, 62, 207, 84, 112, 61, 224, 143, 172, 61, 33, 27, 32, 62, 170, 62, 4, 190, 102, 171, 165, 189, 132, 16, 37, 190, 233, 133, 124, 61, 105, 139, 192, 189, 114, 244, 194, 189, 83, 137, 156, 189, 243, 104, 39, 190, 229, 177, 210, 61, 62, 174, 28, 190, 2, 219, 9, 62, 116, 22, 220, 189, 11, 133, 20, 62, 214, 59, 172, 189, 140, 166, 128, 61, 85, 23, 135, 61, 36, 211, 229, 189, 94, 221, 15, 62, 128, 201, 243, 189, 182, 172, 223, 61, 234, 106, 91, 189, 111, 112, 46, 62, 101, 30, 19, 62, 252, 201, 198, 189, 222, 240, 153, 189, 118, 58, 156, 189, 196, 229, 225, 189, 111, 29, 33, 190, 179, 32, 44, 190, 105, 100, 200, 61, 173, 8, 26, 62, 99, 24, 182, 189, 151, 212, 199, 61, 189, 148, 11, 62, 248, 3, 145, 189, 54, 246, 119, 188, 254, 147, 34, 190, 201, 62, 16, 190, 103, 61, 238, 189, 114, 106, 201, 60, 185, 212, 147, 189, 122, 183, 14, 190, 112, 97, 5, 190, 80, 187, 117, 60, 16, 108, 247, 187, 10, 166, 168, 60, 72, 120, 252, 189, 118, 161, 167, 189, 57, 111, 251, 59, 224, 202, 171, 189, 61, 27, 24, 62, 109, 81, 194, 61, 48, 126, 29, 62, 2, 24, 238, 61, 84, 128, 127, 189, 58, 150, 215, 189, 61, 49, 41, 189, 221, 21, 12, 62, 105, 27, 156, 61, 139, 173, 51, 62, 107, 4, 164, 61, 64, 3, 23, 61, 160, 38, 8, 190, 145, 174, 30, 62, 115, 86, 44, 190, 201, 87, 42, 190, 169, 63, 66, 61, 6, 8, 21, 62, 30, 213, 47, 190, 161, 22, 210, 61, 217, 70, 49, 62, 143, 165, 175, 189, 3, 24, 122, 188, 40, 54, 4, 62, 74, 213, 227, 189, 250, 134, 7, 190, 229, 196, 12, 62, 99, 75, 126, 188, 74, 8, 128, 61, 44, 219, 107, 189, 105, 139, 217, 189, 224, 119, 31, 62, 157, 177, 45, 60, 191, 132, 81, 188, 175, 151, 5, 61, 11, 68, 34, 62};
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
                alignas(float) const unsigned char memory[] = {196, 204, 248, 61, 146, 134, 236, 61, 143, 201, 110, 61, 176, 207, 215, 188, 203, 80, 113, 189, 100, 133, 174, 189, 22, 104, 30, 190, 149, 207, 9, 190, 19, 8, 48, 62, 58, 65, 121, 61, 179, 198, 1, 62, 79, 126, 219, 189, 203, 61, 179, 188, 51, 121, 137, 189, 54, 28, 46, 60, 152, 23, 199, 188, 15, 12, 241, 61, 46, 1, 7, 62, 6, 123, 192, 188, 4, 138, 49, 61, 255, 210, 166, 189, 57, 64, 251, 188, 178, 205, 144, 188, 155, 229, 8, 61, 145, 19, 118, 188, 214, 181, 32, 190, 77, 213, 234, 189, 131, 121, 164, 189, 205, 161, 1, 62, 71, 7, 30, 190, 241, 84, 40, 60, 103, 126, 38, 190};
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
                alignas(float) const unsigned char memory[] = {166, 9, 154, 189, 32, 117, 39, 190, 141, 8, 240, 60, 63, 223, 30, 189, 59, 149, 106, 61, 149, 105, 44, 190, 57, 69, 174, 60, 34, 135, 198, 61, 30, 94, 90, 61, 243, 90, 240, 61, 46, 130, 60, 60, 2, 54, 151, 188, 1, 97, 39, 190, 236, 23, 194, 189, 64, 74, 160, 189, 62, 137, 20, 62, 81, 109, 44, 190, 73, 161, 10, 62, 70, 53, 252, 189, 183, 146, 97, 189, 75, 208, 119, 60, 103, 176, 227, 59, 0, 204, 227, 61, 128, 128, 41, 190, 27, 128, 123, 61, 137, 187, 68, 189, 176, 101, 173, 189, 10, 76, 120, 61, 146, 133, 226, 189, 233, 149, 189, 60, 14, 95, 84, 61, 237, 30, 188, 189, 138, 198, 17, 62, 136, 176, 5, 62, 149, 118, 217, 61, 93, 33, 238, 189, 226, 145, 12, 190, 7, 116, 213, 61, 99, 55, 19, 190, 224, 206, 185, 189, 95, 65, 9, 61, 134, 213, 112, 188, 133, 178, 167, 61, 204, 224, 43, 190, 132, 156, 67, 189, 60, 234, 164, 189, 112, 40, 168, 60, 15, 168, 141, 189, 252, 66, 217, 188, 100, 59, 182, 61, 44, 110, 20, 189, 210, 139, 250, 61, 221, 18, 24, 190, 243, 41, 181, 61, 139, 48, 24, 61, 173, 243, 204, 61, 110, 232, 189, 61, 112, 247, 199, 60, 31, 245, 11, 62, 64, 39, 201, 61, 236, 243, 4, 61, 103, 161, 14, 60, 25, 242, 109, 189, 76, 103, 34, 62};
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
                alignas(float) const unsigned char memory[] = {2, 198, 16, 189, 215, 172, 21, 62};
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
    alignas(float) const unsigned char memory[] = {159, 224, 12, 63, 187, 122, 72, 63, 15, 50, 197, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {1, 39, 16, 190, 216, 230, 180, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0070/steps/000000000000000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}