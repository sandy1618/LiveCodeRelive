import pytest 


@pytest.fixture
def sample_fixture():
    setup_code = "Setting up"
    yield setup_code  # Code before yield is setup code
    teardown_code = "Tearing down"  # Code after yield is teardown code
    print(teardown_code)

def test_example(sample_fixture):
    assert sample_fixture == "Setting up"
