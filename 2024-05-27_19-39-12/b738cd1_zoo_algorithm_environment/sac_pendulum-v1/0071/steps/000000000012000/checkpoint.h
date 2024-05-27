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
                alignas(float) const unsigned char memory[] = {42, 239, 4, 63, 180, 190, 17, 191, 29, 19, 238, 190, 151, 120, 241, 186, 31, 230, 81, 191, 67, 175, 213, 62, 100, 204, 117, 190, 249, 149, 232, 189, 11, 200, 154, 189, 190, 111, 211, 189, 213, 226, 170, 62, 65, 5, 17, 191, 41, 158, 135, 190, 166, 230, 138, 63, 59, 219, 2, 63, 174, 98, 22, 62, 9, 19, 32, 190, 93, 55, 15, 63, 1, 104, 45, 63, 193, 151, 137, 191, 77, 103, 143, 190, 100, 199, 142, 61, 198, 242, 82, 63, 97, 157, 166, 62, 190, 131, 67, 190, 238, 164, 123, 63, 234, 123, 110, 62, 87, 65, 197, 62, 14, 238, 147, 191, 211, 194, 109, 190, 172, 37, 213, 62, 41, 85, 127, 191, 172, 138, 106, 190, 148, 223, 169, 190, 224, 19, 45, 63, 204, 176, 4, 62, 190, 82, 238, 61, 5, 9, 16, 191, 131, 68, 213, 61, 36, 92, 83, 63, 13, 159, 248, 62, 123, 250, 6, 63, 47, 53, 39, 63, 209, 128, 35, 191, 186, 191, 142, 190, 233, 143, 90, 191, 88, 246, 235, 61, 217, 118, 102, 63, 26, 57, 144, 61, 126, 166, 191, 190, 233, 233, 171, 60, 46, 254, 37, 191, 85, 166, 56, 191, 154, 144, 55, 63, 3, 166, 11, 63, 169, 3, 83, 191, 242, 121, 15, 62, 126, 246, 172, 62, 26, 25, 77, 63, 3, 23, 222, 190, 120, 79, 62, 191, 130, 72, 134, 62, 24, 237, 197, 62, 13, 147, 32, 191, 194, 72, 148, 191, 145, 154, 34, 190, 207, 127, 34, 63, 4, 90, 212, 61, 132, 20, 23, 191, 208, 177, 105, 63, 71, 61, 214, 62, 112, 16, 212, 62, 213, 74, 132, 61, 98, 240, 41, 63, 67, 183, 0, 63, 36, 158, 50, 63, 170, 119, 99, 63, 20, 152, 81, 62, 94, 251, 37, 191, 87, 148, 79, 63, 6, 177, 220, 189, 237, 142, 130, 63, 243, 206, 133, 63, 246, 137, 169, 62, 208, 121, 12, 191, 194, 82, 21, 63, 160, 116, 186, 59, 116, 107, 230, 190, 122, 143, 149, 190, 153, 35, 116, 62, 9, 17, 25, 63, 108, 114, 138, 190, 112, 157, 187, 62, 137, 158, 7, 191, 37, 158, 34, 191, 147, 110, 189, 190};
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
                alignas(float) const unsigned char memory[] = {96, 180, 116, 191, 106, 154, 123, 190, 31, 176, 229, 62, 127, 50, 110, 62, 127, 50, 31, 190, 53, 147, 167, 190, 222, 60, 175, 62, 86, 90, 159, 62, 248, 80, 214, 62, 240, 242, 51, 58, 127, 227, 225, 62, 218, 168, 189, 62, 12, 241, 30, 62, 114, 202, 28, 191, 72, 208, 59, 191, 181, 253, 184, 190, 242, 123, 12, 191, 149, 254, 182, 59, 134, 164, 26, 63, 186, 168, 78, 62, 107, 25, 71, 189, 176, 55, 154, 62, 214, 110, 195, 62, 254, 83, 222, 190, 96, 156, 112, 62, 239, 191, 180, 61, 211, 179, 193, 190, 202, 145, 214, 190, 63, 54, 240, 62, 146, 128, 37, 190, 102, 128, 41, 190, 82, 102, 185, 62};
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
                alignas(float) const unsigned char memory[] = {26, 234, 4, 62, 62, 229, 130, 62, 159, 37, 127, 62, 187, 170, 131, 62, 175, 229, 175, 191, 132, 28, 102, 189, 43, 190, 172, 189, 147, 222, 179, 190, 248, 15, 148, 189, 37, 31, 4, 191, 118, 175, 59, 62, 254, 191, 59, 189, 136, 254, 135, 62, 96, 84, 227, 61, 153, 9, 144, 191, 245, 236, 240, 61, 242, 82, 197, 188, 210, 231, 19, 190, 186, 98, 188, 187, 121, 213, 234, 60, 247, 142, 137, 62, 93, 149, 173, 62, 107, 148, 37, 190, 78, 242, 221, 61, 90, 223, 76, 191, 102, 242, 2, 63, 75, 244, 24, 191, 123, 205, 131, 61, 66, 207, 21, 62, 199, 11, 12, 63, 219, 20, 180, 61, 160, 153, 149, 62, 159, 38, 227, 190, 5, 166, 156, 62, 162, 251, 152, 190, 220, 250, 138, 62, 79, 47, 197, 188, 111, 151, 13, 61, 148, 19, 90, 190, 40, 185, 164, 189, 137, 230, 100, 190, 148, 4, 142, 190, 76, 195, 140, 189, 161, 116, 90, 190, 156, 238, 24, 189, 133, 135, 113, 62, 82, 195, 159, 191, 91, 41, 37, 189, 121, 196, 19, 189, 20, 223, 26, 190, 141, 99, 7, 188, 81, 230, 71, 62, 0, 150, 53, 190, 21, 115, 172, 189, 210, 6, 178, 61, 140, 63, 169, 62, 128, 18, 251, 61, 146, 80, 24, 62, 162, 252, 9, 191, 44, 162, 0, 63, 224, 135, 109, 190, 74, 4, 216, 60, 12, 126, 44, 62, 15, 159, 59, 62, 231, 51, 216, 186, 11, 242, 241, 61, 189, 227, 82, 61, 175, 193, 180, 61, 199, 16, 6, 191, 164, 131, 155, 187, 235, 53, 22, 61, 75, 91, 121, 190, 75, 231, 153, 61, 142, 136, 113, 190, 143, 232, 133, 62, 20, 164, 255, 185, 14, 177, 5, 189, 193, 101, 231, 61, 220, 139, 0, 189, 87, 152, 217, 189, 193, 52, 12, 190, 232, 146, 235, 189, 226, 117, 204, 61, 92, 143, 36, 61, 65, 148, 193, 61, 253, 6, 199, 62, 239, 233, 18, 62, 127, 135, 58, 62, 215, 96, 249, 189, 152, 214, 141, 62, 9, 130, 65, 190, 222, 32, 62, 62, 26, 41, 224, 188, 63, 215, 117, 62, 94, 171, 198, 61, 226, 1, 153, 189, 159, 61, 63, 189, 61, 3, 51, 62, 168, 141, 100, 189, 191, 145, 23, 190, 175, 22, 243, 189, 254, 182, 45, 190, 172, 149, 235, 188, 44, 254, 192, 189, 164, 10, 212, 59, 253, 89, 13, 190, 163, 73, 164, 61, 223, 238, 32, 190, 149, 113, 75, 188, 141, 246, 102, 61, 187, 4, 107, 61, 242, 111, 24, 190, 136, 14, 151, 189, 99, 43, 198, 189, 189, 3, 27, 62, 74, 120, 31, 190, 198, 212, 23, 189, 73, 24, 53, 189, 180, 253, 37, 190, 100, 182, 30, 190, 19, 57, 130, 61, 110, 140, 64, 189, 48, 16, 46, 62, 40, 119, 25, 190, 249, 123, 2, 190, 129, 210, 52, 190, 53, 36, 199, 61, 149, 116, 201, 189, 115, 93, 41, 189, 163, 211, 25, 62, 146, 33, 154, 62, 92, 93, 156, 189, 30, 149, 104, 190, 199, 4, 48, 188, 178, 159, 237, 61, 126, 238, 117, 61, 129, 138, 10, 62, 179, 96, 106, 62, 56, 154, 55, 62, 34, 39, 107, 190, 90, 185, 7, 62, 26, 13, 41, 190, 207, 190, 93, 190, 101, 177, 30, 62, 78, 156, 129, 188, 176, 216, 180, 189, 23, 67, 111, 62, 174, 166, 195, 62, 23, 189, 28, 190, 168, 183, 153, 60, 129, 109, 135, 62, 81, 12, 78, 189, 251, 61, 149, 190, 71, 228, 35, 62, 163, 83, 78, 62, 187, 130, 150, 190, 23, 195, 144, 61, 175, 158, 125, 61, 141, 160, 170, 61, 93, 29, 252, 189, 127, 142, 30, 61, 86, 6, 30, 59, 57, 248, 96, 62, 29, 100, 153, 189, 230, 15, 71, 190, 49, 68, 50, 190, 146, 94, 143, 190, 174, 160, 59, 189, 233, 36, 18, 189, 141, 93, 23, 191, 163, 22, 117, 61, 63, 200, 33, 190, 127, 162, 206, 61, 211, 185, 79, 62, 150, 216, 97, 191, 78, 214, 187, 188, 152, 26, 17, 62, 45, 93, 169, 62, 254, 179, 212, 62, 212, 155, 169, 62, 209, 90, 211, 61, 122, 178, 0, 61, 36, 146, 216, 189, 20, 188, 26, 62, 53, 255, 91, 62, 139, 13, 113, 62, 144, 134, 68, 190, 129, 7, 59, 61, 112, 41, 73, 190, 89, 119, 29, 62, 250, 67, 253, 61, 197, 66, 155, 190, 125, 167, 49, 190, 210, 119, 105, 190, 6, 72, 16, 190, 171, 107, 58, 189, 20, 234, 89, 61, 152, 238, 8, 191, 228, 138, 70, 190, 44, 26, 168, 61, 45, 60, 217, 62, 246, 204, 87, 190, 135, 93, 73, 62, 252, 222, 43, 62, 11, 149, 30, 62, 37, 151, 147, 190, 67, 33, 3, 191, 85, 15, 34, 191, 195, 217, 104, 188, 52, 158, 185, 190, 253, 59, 247, 189, 243, 200, 20, 63, 252, 113, 103, 190, 50, 223, 247, 190, 49, 33, 110, 190, 251, 205, 124, 190, 194, 58, 65, 61, 147, 221, 105, 62, 212, 106, 196, 62, 229, 189, 251, 189, 183, 102, 111, 62, 7, 34, 51, 191, 75, 225, 48, 190, 132, 30, 48, 191, 23, 128, 24, 189, 24, 179, 129, 190, 216, 58, 73, 62, 175, 240, 167, 189, 194, 7, 222, 60, 248, 210, 226, 189, 202, 78, 106, 61, 55, 134, 66, 62, 204, 198, 7, 62, 77, 131, 176, 62, 82, 168, 68, 62, 7, 167, 17, 62, 23, 250, 244, 61, 196, 205, 208, 188, 94, 190, 29, 190, 223, 9, 130, 62, 141, 195, 44, 62, 227, 224, 60, 62, 150, 117, 162, 62, 36, 167, 23, 190, 23, 23, 181, 60, 155, 171, 60, 190, 36, 194, 147, 60, 81, 17, 12, 190, 115, 204, 147, 187, 46, 55, 76, 189, 223, 113, 85, 61, 77, 242, 234, 189, 125, 237, 53, 62, 59, 122, 34, 190, 231, 118, 10, 189, 23, 117, 16, 62, 73, 118, 178, 189, 86, 156, 222, 190, 109, 152, 199, 188, 210, 125, 171, 189, 152, 56, 22, 61, 198, 79, 178, 190, 148, 36, 87, 62, 178, 60, 150, 62, 131, 249, 0, 190, 123, 202, 121, 62, 241, 50, 153, 189, 116, 20, 76, 62, 109, 144, 61, 190, 63, 187, 194, 190, 119, 5, 163, 189, 81, 51, 8, 62, 181, 148, 115, 189, 220, 2, 206, 62, 53, 5, 213, 61, 248, 138, 121, 190, 4, 214, 172, 62, 155, 161, 20, 59, 97, 151, 119, 62, 241, 113, 22, 191, 232, 45, 99, 62, 185, 157, 134, 190, 22, 114, 33, 190, 221, 160, 18, 191, 250, 211, 148, 61, 65, 193, 42, 62, 138, 201, 57, 190, 108, 207, 91, 190, 135, 119, 187, 188, 93, 237, 43, 190, 125, 45, 80, 190, 208, 16, 139, 188, 87, 63, 44, 190, 198, 131, 249, 61, 147, 47, 63, 190, 145, 222, 69, 190, 232, 108, 70, 190, 219, 56, 53, 190, 133, 98, 73, 188, 178, 212, 57, 190, 168, 237, 219, 189, 121, 116, 177, 189, 202, 148, 201, 188, 16, 149, 213, 189, 96, 33, 21, 62, 164, 11, 33, 61, 137, 197, 250, 59, 174, 48, 124, 61, 82, 10, 14, 190, 118, 30, 114, 188, 48, 76, 2, 190, 4, 227, 204, 189, 83, 154, 170, 61, 79, 214, 27, 190, 113, 64, 133, 61, 241, 236, 137, 61, 153, 213, 201, 60, 52, 209, 70, 189, 206, 25, 0, 190, 204, 5, 104, 185, 22, 175, 27, 60, 179, 77, 110, 187, 125, 235, 154, 60, 123, 189, 182, 60, 14, 172, 49, 61, 46, 255, 92, 190, 49, 162, 163, 58, 23, 236, 27, 62, 251, 241, 7, 62, 9, 74, 87, 189, 186, 254, 38, 190, 70, 126, 7, 190, 193, 183, 111, 189, 148, 101, 29, 189, 220, 105, 100, 61, 99, 174, 65, 190, 18, 194, 17, 190, 179, 81, 242, 61, 53, 73, 131, 188, 181, 76, 46, 190, 51, 98, 217, 189, 123, 4, 217, 61, 145, 19, 32, 190, 53, 13, 9, 190, 0, 39, 132, 61, 123, 5, 109, 186, 134, 148, 90, 189, 124, 208, 242, 189, 197, 244, 87, 190, 162, 68, 241, 61, 107, 133, 186, 189, 36, 77, 16, 62, 180, 241, 230, 189, 97, 245, 200, 61, 81, 34, 57, 190, 180, 167, 76, 62, 59, 76, 186, 189, 47, 81, 118, 62, 136, 182, 81, 190, 161, 228, 155, 61, 128, 224, 189, 189, 61, 73, 203, 190, 173, 114, 178, 190, 107, 248, 186, 189, 193, 196, 47, 190, 49, 168, 231, 62, 28, 122, 80, 191, 59, 225, 71, 190, 86, 6, 253, 188, 167, 127, 95, 190, 92, 60, 210, 61, 71, 240, 44, 62, 205, 30, 5, 188, 121, 75, 61, 187, 216, 135, 61, 189, 170, 85, 107, 62, 120, 152, 139, 60, 17, 38, 155, 62, 66, 26, 201, 61, 188, 207, 237, 62, 84, 136, 51, 190, 43, 128, 153, 189, 96, 251, 107, 62, 204, 43, 225, 60, 226, 245, 48, 190, 60, 50, 85, 189, 65, 89, 83, 62, 142, 61, 38, 190, 109, 68, 164, 189, 246, 187, 28, 61, 139, 191, 47, 62, 58, 3, 23, 61, 215, 238, 141, 189, 229, 5, 143, 62, 52, 15, 189, 61, 165, 212, 141, 190, 33, 79, 114, 62, 39, 224, 255, 189, 192, 18, 84, 190, 219, 39, 170, 188, 158, 193, 246, 60, 71, 234, 100, 62, 89, 63, 108, 62, 224, 106, 178, 188, 29, 108, 91, 61, 122, 201, 62, 189, 192, 195, 43, 62, 58, 228, 3, 190, 197, 177, 165, 188, 67, 82, 101, 190, 119, 236, 243, 189, 139, 45, 34, 191, 115, 90, 193, 189, 121, 234, 149, 61, 246, 68, 64, 190, 11, 135, 44, 62, 49, 174, 147, 62, 2, 242, 88, 62, 173, 44, 21, 62, 219, 126, 83, 188, 146, 85, 202, 187, 220, 189, 180, 62, 206, 211, 101, 62, 75, 5, 19, 191, 162, 158, 1, 190, 105, 20, 237, 62, 15, 141, 47, 60, 206, 149, 103, 190, 106, 27, 51, 62, 253, 225, 135, 189, 160, 8, 201, 62, 131, 155, 212, 61, 57, 212, 240, 61, 166, 248, 72, 61, 219, 166, 89, 62, 64, 157, 3, 190, 168, 98, 36, 190, 41, 199, 121, 59, 232, 130, 234, 59, 51, 199, 82, 190, 6, 27, 54, 190, 18, 139, 93, 191, 233, 131, 187, 61, 119, 69, 130, 191, 120, 57, 75, 188, 128, 98, 12, 191, 219, 87, 151, 61, 208, 179, 186, 61, 228, 222, 193, 190, 70, 209, 9, 189, 156, 125, 19, 62, 189, 152, 235, 189, 220, 21, 206, 189, 173, 190, 35, 189, 57, 212, 5, 190, 38, 100, 140, 61, 98, 95, 153, 190, 209, 155, 121, 190, 106, 56, 2, 63, 142, 244, 246, 189, 17, 50, 49, 62, 64, 147, 96, 188, 27, 86, 29, 61, 173, 87, 173, 62, 214, 8, 9, 62, 254, 139, 198, 62, 142, 79, 26, 62, 36, 241, 46, 191, 217, 127, 179, 62, 142, 213, 10, 62, 130, 145, 197, 189, 202, 179, 219, 189, 158, 55, 174, 188, 22, 209, 1, 190, 183, 146, 7, 189, 13, 66, 117, 188, 45, 219, 100, 188, 6, 160, 206, 186, 24, 36, 235, 188, 12, 249, 110, 189, 156, 160, 19, 61, 97, 185, 92, 62, 124, 49, 210, 59, 129, 182, 192, 60, 23, 199, 155, 190, 0, 110, 11, 61, 231, 238, 159, 62, 31, 228, 111, 190, 158, 108, 83, 191, 126, 234, 73, 62, 111, 19, 162, 62, 104, 18, 58, 191, 180, 217, 69, 62, 86, 253, 174, 189, 106, 253, 83, 188, 213, 93, 55, 190, 28, 155, 236, 61, 157, 171, 188, 189, 72, 142, 200, 62, 249, 225, 68, 190, 139, 212, 208, 189, 26, 62, 238, 62, 188, 66, 141, 62, 164, 129, 151, 189, 94, 128, 9, 189, 181, 193, 138, 190, 66, 251, 198, 190, 125, 246, 197, 190, 185, 58, 168, 190, 72, 111, 103, 62, 227, 70, 204, 62, 248, 44, 126, 62, 162, 111, 159, 60, 221, 134, 136, 62, 237, 41, 251, 61, 252, 59, 28, 61, 143, 167, 164, 190, 160, 213, 229, 189, 2, 81, 177, 185, 254, 171, 161, 188, 231, 231, 206, 61, 24, 145, 42, 190, 223, 255, 92, 62, 213, 8, 57, 189, 113, 206, 123, 189, 207, 250, 252, 61, 242, 46, 38, 188, 62, 73, 181, 190, 231, 77, 196, 189, 204, 162, 253, 190, 72, 10, 154, 62, 233, 79, 164, 62, 129, 8, 39, 190, 212, 17, 60, 189, 60, 240, 63, 61, 201, 11, 128, 62, 182, 55, 115, 186, 122, 120, 156, 62, 48, 60, 65, 189, 0, 48, 106, 62, 11, 79, 37, 188, 245, 51, 195, 190, 62, 252, 66, 62, 29, 95, 153, 189, 165, 127, 43, 191, 179, 49, 14, 190, 94, 53, 122, 189, 122, 55, 10, 191, 37, 77, 145, 61, 46, 120, 110, 190, 44, 178, 33, 62, 248, 194, 185, 61, 164, 46, 151, 190, 105, 200, 180, 62, 129, 171, 63, 62, 207, 204, 148, 60, 72, 153, 33, 62, 193, 156, 188, 190, 190, 173, 143, 191, 57, 52, 53, 62, 240, 206, 11, 62, 86, 181, 94, 62, 206, 65, 197, 62, 10, 131, 85, 191, 189, 109, 213, 62, 77, 224, 133, 61, 69, 181, 140, 189, 239, 145, 254, 189, 167, 77, 107, 62, 29, 129, 30, 62, 197, 65, 49, 62, 108, 203, 26, 190, 212, 181, 67, 62, 39, 1, 117, 62, 79, 123, 27, 188, 33, 104, 54, 60, 2, 41, 38, 190, 102, 11, 128, 61, 106, 46, 1, 190, 227, 155, 153, 189, 243, 15, 71, 190, 2, 87, 244, 188, 159, 138, 234, 189, 45, 95, 79, 189, 41, 44, 253, 61, 61, 140, 25, 61, 128, 57, 238, 189, 222, 133, 26, 60, 167, 96, 12, 190, 195, 134, 217, 188, 105, 162, 34, 62, 121, 208, 132, 61, 39, 102, 48, 190, 76, 229, 169, 189, 175, 114, 19, 190, 44, 110, 39, 190, 98, 164, 51, 190, 10, 255, 7, 62, 201, 35, 235, 60, 110, 228, 210, 189, 37, 125, 108, 61, 173, 124, 62, 190, 29, 22, 15, 62, 64, 69, 177, 189, 100, 48, 153, 189, 232, 40, 158, 61, 239, 153, 134, 61, 245, 42, 43, 190, 15, 178, 107, 62, 211, 44, 81, 62, 169, 88, 144, 189, 11, 96, 24, 62, 80, 182, 47, 189, 65, 69, 51, 62, 98, 171, 199, 190, 47, 125, 231, 189, 75, 125, 131, 61, 82, 86, 50, 62, 215, 129, 74, 191, 4, 100, 20, 189, 83, 146, 84, 190, 103, 163, 154, 62, 210, 249, 24, 63, 231, 254, 32, 190, 128, 203, 22, 62, 182, 161, 204, 189, 48, 26, 40, 190, 143, 146, 32, 62, 148, 72, 153, 190, 163, 2, 37, 191, 97, 13, 189, 62, 122, 25, 171, 62, 250, 96, 98, 61, 104, 131, 232, 61, 200, 107, 248, 61, 138, 143, 134, 62, 63, 83, 205, 185, 242, 4, 220, 190, 72, 149, 38, 62, 207, 128, 200, 61, 43, 140, 36, 60, 111, 107, 230, 190, 23, 152, 55, 189, 88, 215, 59, 188, 9, 124, 39, 191, 123, 30, 144, 61, 232, 224, 187, 61, 126, 0, 121, 189, 224, 117, 130, 61, 64, 111, 157, 190, 80, 86, 23, 190, 191, 207, 67, 62, 224, 201, 154, 187, 109, 142, 144, 61, 89, 250, 207, 190, 23, 204, 50, 191, 255, 19, 178, 189, 138, 196, 157, 191, 45, 164, 140, 189, 182, 15, 213, 61, 36, 232, 182, 62, 141, 85, 124, 61, 211, 13, 46, 60, 113, 183, 171, 62, 241, 224, 6, 190, 196, 70, 111, 61, 224, 49, 43, 190, 103, 203, 125, 62, 125, 18, 8, 62, 233, 243, 123, 189, 230, 201, 23, 60, 48, 212, 29, 190, 9, 250, 8, 62, 56, 177, 165, 188, 116, 236, 247, 60, 107, 99, 46, 190, 184, 84, 32, 62, 146, 40, 82, 60, 19, 8, 134, 61, 49, 131, 206, 187, 136, 218, 207, 189, 136, 157, 36, 60, 245, 235, 13, 62, 167, 5, 144, 60, 134, 245, 161, 189, 17, 214, 70, 190, 189, 104, 226, 189, 27, 211, 239, 189, 233, 202, 140, 60, 164, 62, 164, 188, 126, 91, 25, 62, 95, 216, 95, 60, 166, 246, 147, 189, 88, 138, 222, 59, 60, 125, 214, 189, 252, 229, 22, 190, 80, 192, 12, 190, 206, 102, 209, 189, 94, 171, 165, 189, 59, 225, 62, 190, 21, 106, 4, 189, 153, 213, 53, 190, 199, 209, 17, 62, 138, 228, 207, 189, 149, 246, 44, 190, 200, 153, 168, 60, 169, 215, 115, 62, 102, 153, 167, 58, 12, 40, 123, 62, 153, 146, 59, 189, 226, 198, 162, 61, 243, 138, 217, 61, 115, 81, 138, 60, 4, 224, 213, 62, 54, 254, 32, 62, 43, 14, 37, 190, 124, 60, 230, 188, 241, 231, 96, 190, 175, 186, 141, 190, 0, 186, 223, 188, 53, 152, 174, 189, 178, 206, 132, 62, 166, 108, 143, 61, 111, 60, 127, 189, 125, 135, 219, 60, 206, 93, 88, 61, 209, 157, 127, 61, 132, 118, 72, 190, 6, 154, 154, 61, 231, 190, 185, 60, 180, 185, 134, 189, 63, 209, 159, 189, 130, 79, 6, 62, 2, 237, 158, 189, 143, 73, 195, 61, 177, 172, 155, 188, 34, 255, 73, 190, 53, 236, 155, 190, 185, 57, 65, 189, 32, 190, 154, 62, 21, 221, 34, 191, 122, 151, 208, 60, 225, 116, 16, 190, 20, 21, 139, 190, 124, 64, 170, 188, 45, 63, 220, 60, 14, 112, 114, 190, 189, 70, 89, 188, 156, 94, 9, 191, 40, 239, 249, 189, 153, 180, 30, 191, 28, 167, 81, 191, 13, 86, 49, 62, 126, 61, 146, 191, 11, 43, 233, 190, 21, 181, 209, 60, 17, 191, 86, 62, 157, 211, 157, 62, 109, 78, 195, 189, 76, 178, 20, 60, 152, 215, 0, 191, 164, 249, 93, 190, 248, 238, 162, 189, 81, 154, 100, 190, 99, 250, 11, 62, 100, 60, 71, 190, 28, 35, 107, 62, 236, 69, 107, 62, 144, 255, 34, 62, 177, 145, 12, 190, 209, 65, 228, 189, 181, 226, 26, 189, 118, 22, 26, 62, 34, 43, 225, 61, 226, 54, 214, 189, 61, 108, 62, 189, 238, 76, 192, 61, 94, 193, 12, 62, 217, 75, 33, 190, 130, 98, 40, 190, 105, 50, 171, 61, 124, 198, 49, 61, 222, 155, 129, 61, 186, 175, 189, 188, 131, 64, 10, 62, 206, 13, 172, 60, 159, 200, 160, 189, 173, 160, 123, 60, 127, 201, 160, 61, 71, 81, 238, 61, 127, 141, 25, 189, 31, 21, 157, 188, 155, 84, 27, 190, 236, 115, 37, 190, 121, 221, 154, 61, 126, 185, 176, 189, 125, 72, 198, 188, 205, 34, 37, 60, 150, 125, 117, 189, 139, 50, 238, 189, 122, 248, 37, 191, 216, 74, 114, 189, 109, 147, 2, 62, 49, 242, 79, 62, 216, 11, 228, 189, 171, 147, 216, 190, 111, 152, 224, 190, 172, 23, 170, 188, 216, 138, 129, 62, 234, 43, 133, 190, 82, 181, 152, 190, 224, 97, 28, 62, 138, 198, 158, 190, 140, 40, 155, 189, 224, 85, 215, 190, 191, 99, 64, 191, 246, 248, 126, 61, 166, 154, 179, 190, 226, 82, 58, 190, 207, 131, 187, 61, 57, 24, 212, 190, 114, 66, 170, 62, 77, 204, 95, 190, 210, 209, 131, 61, 82, 140, 34, 190, 52, 154, 152, 60, 157, 130, 212, 188, 230, 159, 7, 62, 217, 156, 175, 62, 123, 147, 222, 62, 87, 38, 139, 188, 18, 170, 173, 62, 150, 101, 53, 62, 75, 133, 204, 190, 26, 158, 207, 188, 14, 113, 36, 62, 229, 223, 90, 191, 227, 251, 201, 189, 37, 136, 173, 61, 52, 91, 22, 60, 41, 247, 34, 62, 49, 82, 119, 189, 236, 119, 95, 188, 171, 197, 109, 62, 0, 238, 91, 190, 39, 136, 168, 62, 64, 191, 84, 189, 30, 196, 163, 191, 29, 68, 204, 61, 82, 44, 174, 191, 206, 155, 207, 190, 160, 191, 83, 187, 127, 190, 97, 62, 105, 37, 90, 62, 66, 155, 127, 60, 173, 6, 39, 62, 215, 128, 172, 190, 244, 197, 101, 189, 95, 110, 87, 189, 88, 81, 186, 61, 247, 178, 43, 62, 224, 175, 195, 190, 241, 183, 32, 62, 54, 224, 206, 60, 151, 245, 29, 190, 173, 228, 58, 190, 122, 133, 190, 189, 216, 170, 43, 190, 36, 16, 23, 62, 56, 249, 94, 188, 228, 168, 149, 62, 178, 35, 249, 188, 71, 115, 7, 188, 44, 68, 203, 62, 219, 197, 181, 62, 245, 133, 180, 61, 122, 100, 213, 61, 28, 100, 124, 190, 217, 87, 252, 187, 167, 166, 50, 62, 95, 244, 91, 189, 215, 50, 84, 62, 111, 74, 153, 189, 19, 34, 176, 190, 182, 33, 248, 61, 57, 116, 229, 189, 212, 96, 60, 61, 148, 241, 148, 190, 222, 114, 148, 61, 155, 98, 32, 190, 3, 140, 142, 190, 174, 125, 3, 191, 232, 70, 167, 61, 143, 82, 77, 189, 85, 124, 148, 190, 170, 129, 56, 190, 188, 241, 3, 190, 195, 111, 29, 62, 57, 68, 101, 190, 85, 13, 65, 62, 78, 51, 93, 190, 101, 79, 177, 188, 161, 172, 60, 190, 151, 211, 227, 61, 132, 170, 111, 190, 78, 66, 225, 190, 35, 206, 138, 190, 158, 236, 182, 190, 25, 220, 183, 189, 134, 3, 197, 62, 213, 104, 193, 190, 29, 136, 125, 190, 61, 138, 226, 189, 21, 79, 109, 188, 86, 148, 90, 62, 222, 5, 130, 61, 46, 61, 141, 61, 201, 239, 196, 190, 75, 130, 146, 61, 155, 52, 129, 62, 88, 140, 85, 61, 128, 30, 31, 62, 183, 101, 19, 191, 3, 83, 173, 62, 134, 102, 196, 190, 190, 13, 157, 61, 109, 136, 192, 62, 110, 183, 205, 190, 81, 158, 139, 62, 173, 46, 107, 62, 177, 8, 129, 60, 49, 132, 85, 189, 41, 193, 122, 191, 192, 198, 226, 190, 193, 84, 148, 189, 40, 137, 187, 190, 84, 56, 48, 190, 121, 79, 180, 62, 133, 236, 154, 62, 133, 169, 173, 60, 89, 114, 104, 62, 127, 240, 65, 61, 169, 222, 146, 61, 96, 139, 76, 190, 89, 233, 4, 190, 89, 181, 148, 62, 24, 38, 143, 189, 161, 225, 175, 190, 224, 239, 45, 62, 73, 76, 124, 62, 222, 121, 183, 61, 212, 81, 55, 190, 81, 187, 171, 190, 226, 154, 42, 191, 195, 98, 14, 190, 211, 145, 228, 190, 194, 137, 151, 189, 75, 231, 19, 61, 207, 249, 161, 188, 166, 42, 158, 62, 180, 157, 163, 190, 179, 26, 112, 189, 153, 185, 189, 59, 187, 169, 27, 62, 95, 122, 147, 191, 80, 21, 74, 190, 221, 250, 154, 189, 80, 240, 149, 189, 24, 42, 89, 62, 126, 157, 229, 190, 141, 188, 49, 190, 202, 119, 162, 189, 125, 27, 7, 189, 237, 51, 130, 62, 43, 51, 158, 191, 31, 20, 153, 190, 174, 147, 39, 62, 80, 54, 4, 191, 137, 180, 248, 189, 243, 218, 161, 62, 106, 232, 55, 62, 81, 121, 247, 62, 85, 98, 15, 190, 174, 199, 187, 62, 254, 43, 181, 190, 209, 211, 10, 62, 180, 44, 251, 190, 189, 124, 130, 62, 126, 103, 21, 62, 246, 4, 179, 62, 226, 5, 16, 61, 238, 153, 90, 62, 253, 156, 27, 190, 181, 95, 32, 191, 60, 9, 25, 62, 101, 13, 83, 62, 54, 221, 162, 191, 171, 172, 20, 62, 173, 75, 137, 61, 83, 33, 125, 190, 73, 113, 51, 62, 52, 177, 10, 190, 139, 235, 4, 190, 245, 135, 116, 61, 45, 202, 197, 189, 8, 164, 176, 62, 175, 32, 130, 191, 59, 228, 133, 191, 239, 169, 165, 189, 186, 60, 153, 191, 207, 35, 122, 190, 252, 197, 220, 61, 12, 144, 31, 62, 144, 209, 224, 62, 74, 146, 14, 190, 165, 210, 144, 62, 44, 163, 136, 190, 46, 26, 131, 62, 240, 203, 120, 190, 187, 67, 138, 62, 107, 238, 245, 61, 71, 216, 170, 61, 209, 147, 211, 62, 228, 157, 68, 189};
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
                alignas(float) const unsigned char memory[] = {251, 91, 239, 189, 185, 62, 38, 190, 43, 197, 183, 60, 224, 221, 15, 190, 130, 247, 39, 61, 255, 56, 47, 62, 34, 91, 231, 61, 238, 197, 108, 62, 213, 251, 229, 61, 215, 201, 84, 61, 105, 255, 54, 190, 223, 48, 178, 188, 147, 203, 170, 62, 240, 241, 207, 188, 121, 125, 233, 61, 70, 103, 46, 61, 235, 62, 60, 188, 94, 94, 95, 62, 232, 4, 226, 61, 59, 75, 226, 189, 118, 38, 4, 62, 142, 166, 60, 189, 52, 182, 157, 62, 131, 239, 61, 62, 14, 183, 110, 188, 77, 250, 210, 60, 89, 120, 71, 190, 12, 146, 46, 61, 180, 105, 240, 60, 195, 72, 35, 62, 126, 176, 30, 62, 58, 27, 83, 62};
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
                alignas(float) const unsigned char memory[] = {160, 141, 137, 191, 150, 255, 215, 190, 30, 127, 105, 190, 52, 128, 85, 189, 201, 198, 106, 62, 196, 241, 167, 190, 34, 251, 55, 191, 225, 220, 49, 62, 253, 64, 224, 62, 89, 149, 8, 62, 16, 232, 56, 61, 234, 8, 139, 190, 100, 40, 187, 62, 9, 61, 168, 190, 77, 57, 204, 190, 121, 14, 31, 63, 110, 158, 115, 190, 54, 119, 22, 63, 151, 17, 216, 60, 28, 200, 99, 63, 231, 227, 111, 190, 139, 64, 15, 190, 46, 254, 5, 62, 145, 69, 19, 191, 132, 111, 188, 187, 246, 192, 75, 63, 114, 125, 146, 190, 36, 235, 230, 62, 31, 174, 10, 191, 162, 158, 214, 190, 198, 171, 63, 191, 175, 115, 75, 191, 72, 61, 11, 62, 124, 90, 173, 61, 92, 105, 145, 190, 252, 209, 15, 189, 171, 226, 143, 190, 56, 36, 150, 190, 30, 53, 170, 61, 201, 142, 43, 190, 59, 79, 192, 61, 205, 106, 12, 62, 214, 129, 1, 190, 4, 84, 61, 62, 95, 237, 110, 190, 62, 133, 242, 62, 86, 122, 86, 62, 76, 19, 92, 62, 137, 14, 113, 190, 191, 70, 160, 189, 10, 242, 112, 60, 186, 143, 51, 62, 248, 240, 200, 190, 217, 244, 38, 62, 63, 160, 254, 189, 199, 239, 16, 60, 11, 129, 245, 189, 165, 176, 74, 62, 84, 175, 4, 189, 218, 157, 195, 62, 204, 222, 93, 189, 143, 198, 100, 190, 45, 128, 144, 62, 105, 104, 188, 59};
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
                alignas(float) const unsigned char memory[] = {132, 82, 33, 62, 113, 104, 206, 190};
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
    alignas(float) const unsigned char memory[] = {45, 9, 209, 63, 13, 7, 96, 190, 222, 61, 137, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {14, 79, 232, 191, 8, 46, 216, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0071/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}